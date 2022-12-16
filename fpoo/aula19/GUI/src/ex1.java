/*"Avaliação de Saúde" - Crie um programa orientado a objeto  e interface gráfica.
O um formulário deve ter os campos nome, peso e altura e ao clicar no botão "Calcular" deve mostrar o IMC do paciente e um diagnóstico:
Abaixo do peso, Peso normal, Acima do Peso ou Obesidade.

30
60
80
90
100
*/

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.JLabel;

public class ex1 extends JFrame implements ActionListener{
	private static final long serialVersionUID = 1L;
	String nome;
	float peso;
	float altura;
	JPanel painel;
	JLabel aquiNome, aquiPeso, aquiAltura, rotuloResultado;
	JTextField CampoNome, CampoPeso, CampoAltura;
	JButton botao, limpar;
	JTextArea areaResultado;
	String resultado = "", diagnostico;

	ex1(){
		setTitle("Entrada Processamento e Saida");
		setBounds(50,50,600,400);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		painel = new JPanel();
		setContentPane(painel);
		setLayout(null);
		
		aquiNome = new JLabel("Nome: ");
		aquiNome.setBounds(20,20,200,30);
		painel.add(aquiNome);
	
		aquiPeso = new JLabel("Peso: ");
		aquiPeso.setBounds (20,50,200,30);
		painel.add(aquiPeso);
		
		aquiAltura = new JLabel("Altura: ");
		aquiAltura.setBounds (20,80,200,30);
		painel.add(aquiAltura);
		
		rotuloResultado = new JLabel("Resultado: ");
		rotuloResultado.setBounds(20,110,200,30);
		painel.add(rotuloResultado);
	
		CampoNome = new JTextField();
		CampoNome.setBounds(120,20,400,30);
		painel.add(CampoNome);
		
		CampoPeso = new JTextField();
		CampoPeso.setBounds(120,50,400,30);
		painel.add(CampoPeso);
		
		CampoAltura = new JTextField();
		CampoAltura.setBounds(120,80,400,30);
		painel.add(CampoAltura);
		
		botao = new JButton("Processar");
		botao.setBounds(120,110,200,30);
		painel.add(botao);
		botao.addActionListener(this);
	
		limpar = new JButton("Limpar");
		limpar.setBounds(320,110,200,30);
		painel.add(limpar);
		limpar.addActionListener(this);
		
		areaResultado = new JTextArea();
		areaResultado.setBounds(50,160,500,300);
		painel.add(areaResultado);
		
	}

	public static void main(String[] args) {
		System.out.println("TÁ FUNCIONANDO PAE");
		new ex1().setVisible(true);
	}

	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == botao) {
			resultado += aquiNome.getText()+"\t";
			resultado += aquiAltura.getText()+"\t";
			resultado += aquiPeso.getText()+"\t";
			peso = Integer.parseInt(CampoPeso.getText());
			
			if (peso < 30)
				diagnostico = "abaixo do peso";
			else if (peso < 60)
				diagnostico = "peso normal";
			else if (peso < 90)
				diagnostico = "acima do peso";
			else
				diagnostico = "obeso";
			resultado += diagnostico+"\n";
			
			areaResultado.setText(resultado);
		}
		
		if(e.getSource() == limpar) {
			resultado = "";
			areaResultado.setText(resultado);
		
		
		}
	}

}
