package OneHundred;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
 
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
 
public class test extends JFrame{
 
    public test(){
        this.setSize(400,300);
        this.setLocationRelativeTo(null);//设置居中
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
         
        JPanel jp =new JPanel();
         
        final JButton jb1 = new JButton("弹出蓝色");
        JButton jb2 = new JButton("弹出青色");
        jb1.setLocation(50,20);
        jb2.setLocation(90,20);
        JLabel jl = new JLabel("hello");
        jp.add(jl);
        jp.add(jb1);
        jp.add(jb2);
         
        //给第一个按钮添加监听
        jb1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
               jl.setText("first");
            }
        });
        //给第二个按钮添加监听
        jb2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                jl.setText("second");

            }
        });
        this.add(jp);
    }
    public static void main(String arg[]){     
        new test().setVisible(true);
    }
}  