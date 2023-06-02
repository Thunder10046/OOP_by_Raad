
import java.awt.Color;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

class MyFrame extends JFrame implements ActionListener {
	JButton btn1 = new JButton("Convert");
	JLabel label = new JLabel();
	JTextField txt1 = new JTextField();
	JTextField txt2 = new JTextField();
	
	Container c;

	MyFrame() {
		c = this.getContentPane();
		c.setLayout(null);
		c.setBackground(Color.LIGHT_GRAY);
		btn1.setBounds(150, 150, 150, 50);
		btn1.setBackground(Color.gray);
		label.setBounds(120, 130, 80, 50);
		txt1.setBounds(100, 100, 50, 30);
		txt1.setBounds(100, 100, 50, 30);
		txt2.setText("Input $:");
		txt1.setForeground(Color.black);
		txt2.setForeground(Color.black);
		c.add(btn1);
		c.add(label);
		c.add(txt1);
		btn1.addActionListener(this);

		setTitle("Welcome to CSE Java");
		setSize(400, 500);
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	}

	@Override
	public void actionPerformed(ActionEvent e) {
		
			label.setText("VAT=" + txt1.getText());
			

		}
	}


public class convrt {

	public static void main(String[] args) {
		MyFrame frame = new MyFrame();

	}

}