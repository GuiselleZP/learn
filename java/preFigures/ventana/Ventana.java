package ventana;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Dimension;
import javax.swing.SwingConstants;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JLabel;

public class Ventana extends JFrame{
	public Ventana(){
		setSize(700, 500); // Tamaño ventana
		setLocationRelativeTo(null); // Ubicacion en el centro de la pantalla
		setTitle("Diagrama generado");
		setMinimumSize(new Dimension(300, 200));

		iniciarComponentes();

		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}

	private void iniciarComponentes(){
		JPanel panel = new JPanel();

		panel.setLayout(null);
		panel.setBackground(Color.red);
		this.getContentPane().add(panel); //Agregar panel a la ventana

		JLabel etiqueta = new JLabel();
		etiqueta.setBounds(10, 10, 150, 30);
		etiqueta.setText("<html>Hola<p> Mundo<html>");
		etiqueta.setHorizontalAlignment(SwingConstants.CENTER);
		etiqueta.setForeground(Color.white);
		//etiqueta.setOpaque(true);
		//etiqueta.setBackground(Color.black);
		panel.add(etiqueta);
	}
}
