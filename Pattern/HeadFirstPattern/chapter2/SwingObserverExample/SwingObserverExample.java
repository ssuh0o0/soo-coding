package Pattern.HeadFirstPattern.chapter2.SwingObserverExample;

import java.awt.*;
import javax.swing.*;
	
public class SwingObserverExample {
	JFrame frame;
	
	public static void main(String[] args) {
		SwingObserverExample example = new SwingObserverExample();
		example.go();
	}
	
	public void go() {
		frame = new JFrame();

		JButton button = new JButton("할까 말까?");
		
		// button.addActionListener(new AngelListener());
		// button.addActionListener(new DevilListener());

        button.addActionListener(event -> 
			System.out.println("하지마 후회할거야")
		);
		button.addActionListener(event ->
			System.out.println("그냥해!!!")
		);
		frame.getContentPane().add(BorderLayout.CENTER, button);

		// Set frame properties 
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().add(BorderLayout.CENTER, button);
		frame.setSize(300,300);
		frame.setVisible(true);
	}
	
	// class AngelListener implements  ActionListener {
    //     @Override
    //     public void actionPerformed(ActionEvent event) {
    //         System.out.println("Don't do it, you might regret it!");
    //     }
	// }

	// class DevilListener implements ActionListener {
	// 	public void actionPerformed(ActionEvent event) {
	// 		System.out.println("Come on, do it!");
	// 	}
	// }

}