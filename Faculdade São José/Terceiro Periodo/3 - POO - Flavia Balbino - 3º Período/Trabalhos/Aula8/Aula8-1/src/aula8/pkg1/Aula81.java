package aula8.pkg1;
import java.util.Scanner;
class Professor{
    private String name;
    private int tel,codigo;
    
    public void setCod(int Valor){
        this.codigo = Valor;
    }
    public void setName(String Valor){
        this.name = Valor;
    }
    public void setTel(int Valor){
        this.tel = Valor;
    }
    public int getCod(){
        return this.codigo;
    }
    public String getName(){
        return this.name;
    }
    public int getTel(){
        return this.tel;
    }
    public Professor(int cod,String n,int tel){
        this.codigo = cod;
        this.name = n;
        this.tel = tel;
    }
    public Professor(){}
    
    void showData(){
        System.out.printf("Nome: %s\n",getName());
        System.out.printf("Codigo: %d\n",getCod());
        System.out.printf("Telefone: %d\n",getTel());        
    }
}
public class Aula81 {
    public static void main(String[] args) {
       Scanner ler = new Scanner (System.in);
       //Sem passar parametros
       Professor p = new Professor();
       System.out.printf("Digite o nome: ");
       String name = ler.nextLine();
       p.setName(name);
       System.out.printf("Digite o Codigo: ");
       int cod = ler.nextInt();
       p.setCod(cod);
       System.out.printf("Digite o Telefone: ");
       int tel = ler.nextInt();
       p.setTel(tel);
       p.showData();
       // Passando parametros
       Professor pp = new Professor(123456,"Jandrey",33405552);
       pp.showData();      
    }    
}
