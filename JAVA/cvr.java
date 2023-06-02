// Topic 3[java swing: Money Changer] 
// Problem Statement: Write a Money Changer program in Java with the following components. 
// When user clicks Convert button, its shows the output in a label. It also show error message if 
// user inputs wrong value to the input box.

import java.awt.Color;
import java.awt.Container;

import javax.swing.Action;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.text.AttributeSet.ColorAttribute;

import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class Money_changer extends JFrame implements ActionListener{
    JButton bt = new JButton("Convert"); 
    JLabel lb = new JLabel(); 
    JTextField txt1 = new JTextField();
    Container c;
    
    Money_changer()
    {
        c = this.getContentPane();
        c.setLayout(null);
        txt1.setBounds(50,80,80,30);
        txt1.setForeground(Color.WHITE);
        bt.setBounds(50,120,80,30);
        c.add(txt1);
        c.add(bt);
        bt.addActionListener(this);

        setTitle("Converter");
        setSize(400,500);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void actionPerformed(ActionEvent e){
        lb.setText("TK "+txt1.getText());
    }
}

public class cvr {
    Money_changer fr = new Money_changer();
    
}