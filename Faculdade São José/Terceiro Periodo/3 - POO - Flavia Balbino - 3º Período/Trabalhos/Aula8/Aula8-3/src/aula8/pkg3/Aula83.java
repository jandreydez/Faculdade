package aula8.pkg3;
import java.util.Scanner;
class Horario{
    int h,m,s;
    public void setH(int h){
        this.h = h;
    }
    public void setM(int m){
        this.m = m;
    }
    public void setS(int s){
       this.s = s;
    }
    public int getH(){
        return this.h;
    }
    public int getM(){
        return this.m;
    }
    public int getS(){
        return this.s;
    }

    void hr24(){        
        int hr = getH()*3600+getM()*60+getS();
        int hora = hr/3600;
        int minuto = hr/60%60;
        int segundo = hr%60;
        System.out.printf("Formato24h %d:%d:%d\n",hora,minuto,segundo);        
    }
    void hr12(){        
        int hr = getH()*3600+getM()*60+getS();
        int hora = hr/3600;
        int minuto = hr/60%60;
        int segundo = hr%60;
        if (hora>12){
            hora = hora - 12;    
            System.out.printf("Formato12h %d:%d:%d PM\n",hora,minuto,segundo);        
        }
        else{        
            System.out.printf("Formato12h %d:%d:%d AM\n",hora,minuto,segundo);        
        }
    }
    public Horario(){}
    public Horario(int h,int m, int s){
        this.h = h;
        this.m = m;
        this.s = s;
    }
}
public class Aula83 {
    public static void main(String[] args) {
    Scanner ler = new Scanner (System.in);
    //com parametros 
    Horario hc = new Horario(14,54,30);
    hc.hr24();
    hc.hr12();
    //sem parametros
    Horario hs = new Horario();
    System.out.printf("Digite a(s) hora(s)");
    int h = ler.nextInt();
    hs.setH(h);
    System.out.printf("Digite o(s) minuto(s)");
    int m = ler.nextInt();
    hs.setM(m);
    System.out.printf("Digite o(s) segundo(s)");
    int s = ler.nextInt();
    hs.setS(s);
    hs.hr24();
    hs.hr12();    
    }    
}
