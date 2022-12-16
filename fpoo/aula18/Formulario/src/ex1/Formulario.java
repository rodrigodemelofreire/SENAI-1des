package ex1;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.JLabel;

public class Formulario extends JFrame implements ActionListener{
	private static final long serialVersionUID = 1L;
	JPanel painel;
	JLabel rotuloNome, rotuloIdade, rotuloResultado;
	JTextField CampoNome, CampoIdade;
	JButton botao, limpar;
	JTextArea areaResultado;
	String resultado = "", fasesDaVida;
	int idade;
	Formulario(){
		setTitle("Entrada Processamento e Saida");
		setBounds(50,50,600,400);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		painel = new JPanel();
		setContentPane(painel);
		setLayout(null);
		
		rotuloNome = new JLabel("Nome: ");
		rotuloNome.setBounds(20,20,200,30);
		painel.add(rotuloNome);
	
		rotuloIdade = new JLabel("Idade: ");
		rotuloIdade.setBounds (20,50,200,30);
		painel.add(rotuloIdade);
		
		rotuloResultado = new JLabel("Resultado: ");
		rotuloResultado.setBounds(20,80,200,30);
		painel.add(rotuloResultado);
	
		CampoNome = new JTextField();
		CampoNome.setBounds(120,20,400,30);
		painel.add(CampoNome);
		
		CampoIdade = new JTextField();
		CampoIdade.setBounds(120,50,400,30);
		painel.add(CampoIdade);
		
		botao = new JButton("Processar");
		botao.setBounds(120,80,200,30);
		painel.add(botao);
		botao.addActionListener(this);
	
		limpar = new JButton("Limpar");
		limpar.setBounds(320,80,200,30);
		painel.add(limpar);
		limpar.addActionListener(this);
		
		areaResultado = new JTextArea();
		areaResultado.setBounds(20,160,700,300);
		painel.add(areaResultado);
		
	}
	
	
	public static void main(String[] args) {
		System.out.println("ESTE PROGRAMA ESTA FUNCIONANDO");
		new Formulario().setVisible(true);
		

	}


	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == botao) {
			resultado += CampoNome.getText()+"\t";
			resultado += CampoIdade.getText()+"\t";
			idade = Integer.parseInt(CampoIdade.getText());
			
			if (idade < 10) 
				fasesDaVida = "criança";
			else if (idade < 22)
				fasesDaVida = "Jovem";
			else if (idade < 60)
				fasesDaVida = "Adulto";
			else 
				fasesDaVida = "idoso";
			resultado += fasesDaVida+"\n";
			
			areaResultado.setText(resultado);
		
		}
		if(e.getSource() == limpar) {
			resultado = "";
			areaResultado.setText(resultado);
		
		}
		
	}

}
