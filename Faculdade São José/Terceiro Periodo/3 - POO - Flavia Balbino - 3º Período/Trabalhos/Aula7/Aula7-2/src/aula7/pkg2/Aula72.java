package aula7.pkg2;
import java.util.Scanner;
class Turma{
    private int codigo_dp,codigo_tm, quantidade,dia;
    private double hr_inicial,hr_final;
    
    public void setCodigoDp(int valor){
        this.codigo_dp = valor;
    }
    public void setCodigoTm(int valor){
        this.codigo_tm = valor;
    }
    public void setQtd(int valor){
        this.quantidade = valor;
    }
    public void sethrI(double valor){
        this.hr_inicial = valor;
    }
    public void sethrF(double valor){
        this.hr_final = valor;
    }
    public void setDia(int valor){
        this.dia = valor;
    }
    public int getCodigoDp(){
        return this.codigo_dp;
    }
    public int getCodigoTm(){
        return this.codigo_tm;
    }
    public int getQtd(){
        return this.quantidade;
    }
    public double gethrI(){
        return this.hr_inicial;
    }
    public double gethrF(){
        return this.hr_final;
    }
    public int getDia(){
        return this.dia;
    }
    void mostrardados(){
    System.out.printf("Codigo da Disciplina: %d\n",getCodigoDp());
    System.out.printf("Codigo do Aluno: %d\n",getCodigoTm());
    if(getQtd()<35){
        System.out.printf("Quantidade de Aluno: %d\n",getQtd());
    }else{
        System.out.printf("Turma lotada ja possue 35 Aluno!\n");
    }
    System.out.printf("Horario de inicial: %.2f\n",gethrI());
    System.out.printf("Horario de Termino: %.2f\n",gethrF());
    System.out.printf("Dia: %d\n",getDia());
    }
}
public class Aula72 {
    public static void main(String[] args) {
        Scanner ler = new Scanner (System.in);
        Turma turma = new Turma();
        System.out.printf("\nDigite o Codigo da disciplina: ");
        int codigo_dp = ler.nextInt();
        turma.setCodigoDp(codigo_dp);
        System.out.printf("\nDigite o Codigo do aluno: ");
        int codigo_tm = ler.nextInt();
        turma.setCodigoTm(codigo_tm);
        System.out.printf("\nDigite a quantidade de aluno: ");
        int qtd = ler.nextInt();
        turma.setQtd(qtd);
        System.out.printf("\nDigite o horario de inicio: ");
        float hri = ler.nextFloat();
        turma.sethrI(hri);
        System.out.printf("\nDigite o horario de termino: ");
        float hrf = ler.nextFloat();
        turma.sethrF(hrf);
        System.out.printf("\nDigite o dia da aula: ");
        int dia = ler.nextInt();
        turma.setDia(dia);
        turma.mostrardados();
    }
    
}
