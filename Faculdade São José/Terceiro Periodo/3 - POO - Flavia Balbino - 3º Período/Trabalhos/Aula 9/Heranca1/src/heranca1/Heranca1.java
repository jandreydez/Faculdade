package heranca1;
import java.util.Scanner;
    public class Heranca1 {
public class Pessoa{
    // Atributos    
    private String nome;
    private long identidade;
    
    //Metodos para passagem de dados
    public void setNome (String n) {
            this.nome = n;
        }
    public void setId (long id) {
            if (id<0){
        System.out.printf("Identidade inválida!");
        this.identidade = 0;}
    else
        this.identidade = id;
    }    
    //Metodos para retorno de atributos
    public String getNome(){
        return this.nome;
    }    
    public long getId (){
        return this.identidade;
    }    
    //Metodo para impressao de dados
    public void imprimir(){        
       System.out.printf ("Nome: %s\n", getNome());
       System.out.printf ("Identidade: %d\n", getId());
    }

}    
class Aluno extends Pessoa {
        
        //Atributos        
        private long matricula;
        private double ta1, ta2;
        
        //Metodos para passagem de dados
        public void setMat (long m){
            this.matricula = m;
            }
        
        public void setNota1 (double N1){
            this.ta1 = N1;
        }
        
        public void setNota2 (double N2){
            this.ta2 = N2;
        }
        
        //Metodos para retorno dos atributos        
        public long getMat(){
        return this.matricula;
        }
        
        public double getTA1(){
        return this.ta1;
        }
        
        public double getTA2(){
        return this.ta2;
        }
         
        //Método para calcular e retornar a média
        public double media(){
            return (ta1+ta2)/2;
        }
        
        //Método para imprimir notas        
        public void printSituacaoAluno () {
            
            System.out.printf("Matriculo: %d\n", getMat());
            System.out.printf("A1: %.2f\n", getTA1());
            System.out.printf("A2: %.2f\n", getTA1());
            System.out.printf("Media: %.2f\n", media());
            if (media()>6)
                
                System.out.printf("Aluno aprovado!\n");
            else{
                if (media()<4)
                System.out.printf("Aluno reprovado!\n");
                else
                System.out.printf("Aluno de TA3: %f\n", media());    
            }
        }
    }
   

    public static void main(String[] args) {
        
        Scanner ler = new Scanner (System.in);
      
        Aluno estudante1 = new Aluno();
        
        String nome;
        long matr, id;
        Double Nota1, Nota2;
        
        //Preenchimento dos dados        
        System.out.print ("Digite o nome do aluno:");
        nome = ler.nextLine();
        estudante1.setNome(nome);
        System.out.print ("Digite a identidade do aluno:");
        id = ler.nextLong();
        estudante1.setId(id);
        System.out.print ("Digite a matricula do aluno:");
        matr = ler.nextLong();
        estudante1.setMat(matr);
        System.out.print ("Digite a primeira nota do aluno:");
        Nota1 = ler.nextDouble();
        estudante1.setNota1(Nota1);
        System.out.print ("Digite a segunda nota do aluno:");
        Nota2 = ler.nextDouble();
        estudante1.setNota2(Nota2);
        
        estudante1.imprimir();
        estudante1.printSituacaoAluno();
               
    }   
}