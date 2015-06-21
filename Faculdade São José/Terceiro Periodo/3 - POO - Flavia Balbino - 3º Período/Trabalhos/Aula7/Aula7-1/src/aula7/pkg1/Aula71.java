package aula7.pkg1;

import java.util.Scanner;

class Disciplinas{
    private int codigo;
    private String nome;
    private float carga;
    
    public void setCodigo(int Cod){
        this.codigo = Cod;        
    }
    public void setNome(String Nome){
        this.nome = Nome;
    }
    public void setCarga(float Carga){
        this.carga = Carga;
    }
    public int getCodigo(){
        return this.codigo;
    }
    public String getNome(){
        return this.nome;
    }
    public float getCarga(){
        return this.carga;
    }
    public void MostrarDados(){
        System.out.printf("Codigo: %d\n",getCodigo());
        System.out.printf("Nome: %s\n",getNome());
        if(this.carga>0){
            System.out.printf("Carga: %.2f\n",getCarga());
        }
        else{
            System.out.printf("Carga Inválida");
        }
    }
}
public class Aula71 {
    public static void main(String[] args) {
        Scanner ler = new Scanner (System.in);
        Disciplinas Disc = new Disciplinas();
        
        System.out.printf("Digite o nome da disciplina: \n");
        String Nome = ler.nextLine();
        Disc.setNome(Nome);        
        System.out.printf("Digite o codigo da disciplina: \n");
        int Cod = ler.nextInt();
        Disc.setCodigo(Cod);        
        System.out.printf("Digite a carga da disciplina: \n");
        float Carga = ler.nextFloat();
        Disc.setCarga(Carga);
        Disc.MostrarDados();
    }    
}
