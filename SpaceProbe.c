#include <stdio.h>
int main(){
    double m,T,v0,H,g,vsoft,dt,df,A,de=H-df,v,h=0.0,a,t=0,total=0.0;
    int s=0;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&m,&T,&v0,&H,&g,&vsoft,&dt);
    h=H;
    A=T/m;
    df=((A-g)*H)/A;
    de=H-df;
    printf("m=%.3lf\nT=%.3lf\nv0=%.3lf\nH=%.3lf\ng=%.3lf\nvsoft=%.3lf\ndt=%.3lf\ndf=%.3lf\n",m,T,v0,H,g,vsoft,dt,df);
    while (h>0){   
        s=0; 
        a=-1*g;
        if (h<=de && v<vsoft){
            s=1;
            a=A-g;
            total=total+dt;}
        printf("t=%.3lf h=%.3lf v=%.3lf s=%d\n",t,h,v,s);
        h=h+(v0*dt)+(a*dt*dt*0.5);
        v=v0+a*dt;
        v0=v;
        t=t+dt;} 
    printf("t=%.3lf h=%.3lf v=%.3lf\ntotal=%.3lf",t,h,v,total);
    return 0;}