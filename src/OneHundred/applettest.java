package OneHundred;



//
//import java.awt.event.MouseListener;
//import java.awt.event.MouseEvent;
import java.applet.Applet;
import java.awt.*;

public class applettest extends Applet
{
	public void init()
	{
		this.setSize(200,200);;
		setLayout(null);
		
		Button btn = new Button("btn1");
		btn.setBounds(20, 20, 40, 20);
		add(btn);
//		setLayout(new FlowLayout());
//		for(int i = 0; i < 5; i ++)
//		{
//			add(new Button("button "+ i));
//		}
//		GridLayout GL = new GridLayout(3, 4);
//		GL.setHgap(20);
//		GL.setVgap(20);
//		this.setLayout(GL);
//		for(int i = 0; i < 12; i ++)
//		{
//			add(new Button("button "+ i));
//		}
	}
	
}


//import java.awt.Graphics;
// 
//public class appletTest extends Applet
//                             implements MouseListener {
// 
//    StringBuffer strBuffer;
// 
//    public void init() {
//         addMouseListener(this);
//         strBuffer = new StringBuffer();
//        addItem("initializing the apple ");
//    }
// 
//    public void start() {
//        addItem("starting the applet ");
//    }
// 
//    public void stop() {
//        addItem("stopping the applet ");
//    }
// 
//    public void destroy() {
//        addItem("unloading the applet");
//    }
// 
//    void addItem(String word) {
//        System.out.println(word+"\n");
//        strBuffer.append(word+"\n");
//        repaint();
//    }
// 
//    public void paint(Graphics g) {
//         //Draw a Rectangle around the applet's display area.
//        g.drawRect(0, 0,
//                      getWidth() - 1,
//                      getHeight() - 1);
// 
//         //display the string inside the rectangle.
//        g.drawString(strBuffer.toString(), 10, 20);
//    }
// 
//  
//    public void mouseEntered(MouseEvent event) {
//    }
//    public void mouseExited(MouseEvent event) {
//    }
//    public void mousePressed(MouseEvent event) {
//    }
//    public void mouseReleased(MouseEvent event) {
//    }
// 
//    public void mouseClicked(MouseEvent event) {
//         addItem("mouse clicked! ");
//    }
//}