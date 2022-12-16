package ex1;

import javax.swing.JOptionPane;

public class Menssagem {

	public static void main(String[] args) {
		System.out.println("teste");
		//entrada
		String texto = JOptionPane.showInputDialog("Digite your name completo: ");
		//processamento
		String nomes[] = texto.split(" ");
		texto = "Seu primeiro nome possui " + nomes[0].length()+" letras\n";
		texto += "Seu ultimo nome possui " + nomes[nomes.length-1].length()+ " letras\n";
		if(nomes.length > 2)
			texto += "Seu nome do meio possui: "+nomes[1].length()+" Lestras\n";
		else
			texto += "Você não possui nome do meio";		
		//saida
		JOptionPane.showMessageDialog(null, texto);
	}

}
