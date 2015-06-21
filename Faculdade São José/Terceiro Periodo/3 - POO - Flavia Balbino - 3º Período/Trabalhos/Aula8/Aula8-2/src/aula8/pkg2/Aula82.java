package aula8.pkg2;

import java.util.Scanner;

class Projeto{
    private int qtd;
    private double media_sal,preco_peca;
    
    public void setQtd(int valor){
        this.qtd = valor;
    }    
    public void setMdSal(double valor){
        this.media_sal = valor;
    }
    public void setPr(double valor){
        this.preco_peca = valor;
    }
    public int getQtd(){
        return this.qtd;
    }
    public double getMdSal(){
        return this.media_sal;
    }
    public double getPr(){
        return this.preco_peca;
    }
    void CalCustoMensal(){
        double all = 1.2*getQtd()*getMdSal()+1.7*getPr();
        System.out.printf("\nCusto mensal do projeto: %.2f",all);
    }
    public Projeto(int qtd,double media, double preco){
        this.qtd =qtd;
        this.media_sal = media;
        this.preco_peca = preco;
        
    }
    public Projeto(){}
}
public class Aula82 {
    public static void main(String[] args) {
        Scanner ler = new Scanner (System.in);
        //sem passagem de parametros
        Projeto p = new Projeto();
        System.out.printf("Digite a quantidade pessoas do projeto:");
        int qtd = ler.nextInt();
        p.setQtd(qtd);
        System.out.printf("Digite a media salarial do projeto:");
        double media = ler.nextDouble();
        p.setMdSal(media);
        System.out.printf("Digite o custo mensal das peças do projeto:");
        double preco = ler.nextDouble();
        p.setPr(preco);
        p.CalCustoMensal();
        //com passagem de parametros
        Projeto pp = new Projeto(45,1500,30780);
        pp.CalCustoMensal();
    }
    
}
