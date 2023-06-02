import java.awt.Color;
import java.awt.Container;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPasswordField;
import javax.swing.JTextField;
import javax.swing.text.AttributeSet.ColorAttribute;

import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class money_changer extends JFrame {

    private JLabel msg, ans;
    private JTextField input;
    private JButton convert, clear;
    private Font f;
    private Container c;

    money_changer() {
        c = this.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.gray);

        f = new Font("Times New Roman", Font.BOLD, 20);

        msg = new JLabel();
        msg.setText("Input $: ");
        msg.setFont(f);
        msg.setBounds(100, 80, 200, 50);
        msg.setForeground(Color.white);
        c.add(msg);

        ans = new JLabel();
        ans.setFont(f);
        ans.setBounds(100, 150, 200, 50);
        ans.setForeground(Color.white);
        c.add(ans);

        input = new JTextField();
        input.setBounds(180, 80, 200, 50);
        input.setFont(f);
        c.add(input);

        convert = new JButton("Convert");
        convert.setBounds(110, 230, 120, 50);
        convert.setFont(f);
        convert.setBackground(Color.LIGHT_GRAY);
        c.add(convert);

        clear = new JButton("Clear");
        clear.setBounds(250, 230, 120, 50);
        clear.setFont(f);
        clear.setBackground(Color.LIGHT_GRAY);
        c.add(clear);

        convert.addActionListener(new ActionListener() {

            public void actionPerformed(ActionEvent e) {
                double d = Double.parseDouble(input.getText());
                double d2 = d * 102.85;
                String res = String.valueOf(d2);
                ans.setText("Taka : " + res);
            }
        });

        clear.addActionListener(new ActionListener() {

            public void actionPerformed(ActionEvent e) {
                input.setText("");
                ans.setText("");
            }
        });

    }

    public static void main(String[] args) {
        money_changer mn = new money_changer();
        mn.setVisible(true);
        mn.setBounds(200, 300, 500, 400);
        mn.setTitle("Money Converter by Raad Auritro (20 03 042)");
        mn.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }

}