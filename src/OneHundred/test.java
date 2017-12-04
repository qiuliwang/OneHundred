package OneHundred;

import javax.swing.JFrame;

public class test extends JFrame{
	public test()
	{
		this.setTitle("test");
		this.setBounds(50, 50, 500, 500);
		this.setSize(500, 500);
		this.setLocation(20, 20);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setVisible(true);
	}
	
	public static void main(String args[])
	{
		new test();
	}
}