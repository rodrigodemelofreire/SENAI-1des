package Vendas02;

public class Main {

	public static void main(String[] args) {
		Venda vs[] = new Venda[10];
		
		vs[0] = new Venda();
		vs[0].produto = "Camiseta";
		vs[0].preco = 19.9f;
		vs[0].quantidade = 1;
		
		vs[1] = new Venda();
		vs[1].produto = "touca";
		vs[1].preco = 29.9f;
		vs[1].quantidade = 8;
		
		vs[2] = new Venda();
		vs[2].produto = "Bermuda";
		vs[2].preco = 39.9f;
		vs[2].quantidade = 2;
		
		vs[3] = new Venda();
		vs[3].produto = "sapato";
		vs[3].preco = 59.9f;
		vs[3].quantidade = 5;
		
		vs[4] = new Venda();
		vs[4].produto = "mochila";
		vs[4].preco = 39.9f;
		vs[4].quantidade = 2;
		
		vs[5] = new Venda();
		vs[5].produto = "chapeu";
		vs[5].preco = 29.9f;
		vs[5].quantidade = 1;
		
		vs[6] = new Venda();
		vs[6].produto = "Calça";
		vs[6].preco = 99.9f;
		vs[6].quantidade = 3;
		
		vs[7] = new Venda();
		vs[7].produto = "cueca";
		vs[7].preco = 10.9f;
		vs[7].quantidade = 10;
		
		vs[8] = new Venda();
		vs[8].produto = "meia";
		vs[8].preco = 19.9f;
		vs[8].quantidade = 5;
		
		vs[9] = new Venda();
		vs[9].produto = "Calcinha";
		vs[9].preco = 12.9f;
		vs[9].quantidade = 1;
		
		float total = 0;
		System.out.println("Produto\tPreco\tQuantidade\tValor");
		for(int i = 0; i < 10; i++) {
			System.out.printf("%s\t%.2f\t%.2f\n", vs[i].produto, vs[i].preco, vs[i].quantidade, vs[i].subtotal());
			total += vs[i].subtotal();
		}
		System.out.printf("total: R$ %.2f\n", total);
	}

}
