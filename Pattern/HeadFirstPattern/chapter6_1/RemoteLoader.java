package Pattern.HeadFirstPattern.chapter6_1;

import Pattern.HeadFirstPattern.chapter6.LightsOnCommand;
import Pattern.HeadFirstPattern.chapter6.RemoteControl;
import Pattern.HeadFirstPattern.chapter6.StereoOnWithCDCommand;

public class RemoteLoader {
    public static void main(String[] args) {
        Light light = new Light("Living Room");
        TV tv = new TV("Living Room");
        Stereo stereo = new Stereo("Living Room");
        Hottub hottub = new Hottub();

        LightsOnCommand lightOn = new LightsOnCommand(light);
        StereoOnWithCDCommand stereoOn = new StereoOnWithCDCommand(stereo);
        TVOnCommand tvOn = new TVOnCommand(tv);
        HottubOnCommand hottubOn = new HottubOnCommand(hottub);

        LightsOffCommand lightOff = new LightsOffCommand(light);
        StereoOffWithCDCommand stereoOff = new StereoOffWithCDCommand(stereo);
        TVOffCommand tvOff = new TVOffCommand(tv);
        HottubOffCommand hottubOff = new HottubOffCommand(hottub);

        Command[] partyOn = {lightOn, stereoOn, tvOn, hottubOn};
        Command[] partyOff = {lightOff, stereoOff, tvOff, hottubOff};

        MacroCommand  partyOnMacro = new MacroCommand(partyOn);
        MacroCommand  partyOffMacro = new MacroCommand(partyOff);

        remoteControl.setCommand(0, partyOnMacro, partyOffMacro);

        System.out.println(remoteControl);
        System.out.println("------ 매크로 ON ------");
        remoteControl.onButtonWasPushed(0);
        System.out.println("------ 매크로 Off ------");
        remoteControl.offButtonWasPushed(0);
    }
}
