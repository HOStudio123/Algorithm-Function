#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
#include <string>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include <iomanip>
#include<stdio.h>
#include<windows.h>
using namespace std;
typedef long double ld;
typedef unsigned int ui;
typedef long long ll;
SYSTEMTIME sys;
char dp[13][14],sl[99][99],sl2[99][99];
char cd='0';
int d=1,x=6,y=7,lei=0,kgz=0;
ll dlcs=0,xxcs=0,zdcs=0,slcs=0,sbcs=0,gmcs=0,gzcs=0,bbcs=0,bosscs=0,yxcs=0,wjccs=0,tscs=0,hxcs=0,sxcs=0,cxcs=0,jbrs=0,lvdg=0,sjsh=0,sjtzq=0;
struct ccdd{
	string n="未注册";
	int lv;
	int zd;
}cdmzz[10];
struct hbdd{
	string n;
};
int zd(ll tjnlv,ll tjnmp,ll hjnlv,ll hjnmp,ll sjnlv,ll sjnmp,ll cjnlv,ll cjnmp,string sx,ll hxjnlv,ll hxjnmp,ll qjnmp,ll mp,ll mps,ll qjnlv,ll rs,string xh,string zh,ll hp,ll hpd,ld wgpd,ld hgpd,ld sgpd,ld cgpd,ld wgp,ld hgp,ld sgp,ld cgp,ld fyp,ld bdssglg,ld bdysglg,ld bdysgpg,ld bdnshpg,ld bdnsgpg,ld bdwmglg,ld bdwmgpg,ld fypd){
	zdcs++;
	int hxjn=0,sxjn=0,cxjn=0,bp64=0;
	cout<<"注意：此次有"<<rs<<"个敌人"<<endl;
	int hpds[1027],hpdz=hpd;
	for(int i=rs;i>0;i--){
		hpds[i]=hpdz;
	cout<<"HP:";
	for(int i=0;i<39;i++)cout<<"■";
	cout<<" "<<hpds[i]<<"/"<<hpdz<<endl;
	    }
	string zs;int zsd=1;
	if(xh=="1")zsd=rand()%4;
	int gp=0,gpd=0,shp=0,shpd=0,mpj=mp;
	while(hp>0&&hpd>0){
		mpj+=mps;
		if(mpj>mp)mpj=mp;
		if(xh=="bp11"||xh=="bp12"||xh=="bd13"||xh=="bd21"||xh=="bd22"||xh=="bd23"||xh=="bp31"||xh=="bp32"||xh=="bp33"||xh=="bp41"||xh=="bp42"||xh=="bp43"||xh=="bp51"||xh=="bp52"||xh=="bp53"||xh=="bp61"||xh=="bp62"||xh=="bp63"||xh=="bp65"||xh=="bp71"||xh=="bp72"||xh=="bp73"||xh=="bp74"||xh=="bp75"||xh=="bp76"||xh=="bd77"||xh=="bt"||xh=="bc"||xh=="xj"||xh=="sj")zsd=0;
		if(xh=="5"||xh=="6")zsd=rand()%4;
		if(xh=="bp64")zsd=(rand()%2)*2;
		if(xh=="bh")zsd=1;
		if(xh=="bs")zsd=2;
		cout<<"MP:";
		for(int i=0;i<mpj*19/mp;i++)cout<<"◆";
		for(int i=mpj*19/mp;i<19;i++)cout<<"◇";
		cout<<" "<<mpj<<"/"<<mp<<endl;
		cout<<"请输入招式（1 体  2 火  3 水  4 草";
		if(qjnlv>0&&mpj>=qjnmp)cout<<"  5 山崩地裂";
		if(hxjnlv>0&&mpj>=hxjnmp)cout<<"  6 天降甘露";
		if(sx=="体"&&tjnlv>0&&mpj>=tjnmp)cout<<"  7 一箭三雕";
		if(sx=="火"&&hjnlv>0&&mpj>=hjnmp)cout<<"  7 烈火熊熊";
		if(sx=="水"&&sjnlv>0&&mpj>=sjnmp)cout<<"  7 滴水成冰";
		if(sx=="草"&&cjnlv>0&&mpj>=cjnmp)cout<<"  7 百毒入侵";
		cout<<"  0 退出战斗）"<<endl;
		cin>>zs;//  7 专属技能
		if(zs=="0")return -1;
		if(xh=="5"||xh=="6"||xh=="1"||xh=="bt")cout<<"对手使用了";
		if(zsd==0){
			if(xh=="bp11"||xh=="bp12"||xh=="5"||xh=="6"||xh=="1"||xh=="bp31"||xh=="bp32"||xh=="bp33"||xh=="bp41"||xh=="bp42"||xh=="bp43"||xh=="bp51"||xh=="bp52"||xh=="bp53"||xh=="bp61"||xh=="bp62"||xh=="bp63"||xh=="bp64"||xh=="bp65"||xh=="bp71"||xh=="bp72"||xh=="bp73"||xh=="bp74"||xh=="bp75"||xh=="bp76"||xh=="bt"||xh=="sj"||xh=="xj")gpd=wgpd;
			if(xh=="bd13"||xh=="bd21"||xh=="bd22"||xh=="bd23"||xh=="bd77"||xh=="bc")gpd+=wgpd,gpd*=0.9;
			if(xh=="bc")gpd+=cgpd,gpd*=0.9;
			if(xh=="5"||xh=="6"||xh=="1"||xh=="bt")cout<<"体术技能";
			if(xh=="bp11")cout<<"乌合之众使用了以多欺少";
			if(xh=="bp12")cout<<"乌合之众使用了少数服从多数";
			if(xh=="bd13")cout<<"乌合之众使用了恒河水";
			if(xh=="bd21")cout<<"太阳帝国使用了核废水";
			if(xh=="bd22")cout<<"太阳帝国使用了核泄漏";
			if(xh=="bd23")cout<<"太阳帝国使用了小男孩的余温";
			if(xh=="bp31")cout<<"战争起源使用了闪击";
			if(xh=="bp32")cout<<"战争起源使用了毁约";
			if(xh=="bp33")cout<<"战争起源使用了世界大战";
			if(xh=="bp41")cout<<"铁塔尚在使用了寄巴黎奥运会";
			if(xh=="bp42")cout<<"铁塔尚在使用了火烧卢浮宫";
			if(xh=="bp43")cout<<"铁塔尚在使用了投降",hpds[1]-=9999;
			if(xh=="bp51")cout<<"日不落的余辉使用了无敌舰队";
			if(xh=="bp52")cout<<"日不落的余辉使用了工业革命";
			if(xh=="bp53")cout<<"日不落的余辉使用了‘文明人’";
			if(xh=="bp61")cout<<"凌冬将至使用了礼炮一号";
			if(xh=="bp62")cout<<"凌冬将至使用了无政府状态";
			if(xh=="bp63")cout<<"凌冬将至使用了核讹诈";
			if(xh=="bp64")cout<<"凌冬将至使用了冰天雪地";
			if(xh=="bp65")cout<<"凌冬将至使用了酥莲";
			if(xh=="bp71")cout<<"怒海狂涛使用了北约";
			if(xh=="bp72")cout<<"怒海狂涛使用了冷战";
			if(xh=="bp73")cout<<"怒海狂涛使用了种族歧视";
			if(xh=="bp74")cout<<"怒海狂涛使用了‘自由’";
			if(xh=="bp75")cout<<"怒海狂涛使用了唯恐不乱";
			if(xh=="bp76")cout<<"怒海狂涛使用了孤独求败";
			if(xh=="bd71")cout<<"怒海狂涛使用了小男孩";
			if(xh=="xj")cout<<"时间小兵使用了时间错乱";
			if(xh=="sj")cout<<"时间使用了时间逆流";
			cout<<"进行攻击";
		}
		if(zsd==1){
			sxjn++;
			if(cxjn>0)cxjn--;
			gpd=hgpd;//TODO
			cout<<"火系技能";
			if(xh=="bh"){
				cout<<" 灼烧！";
			}
		}
		if(zsd==2){
			if(hxjn>0)hxjn--;
			cxjn++;
			gpd=sgpd;
			cout<<"水系技能";
			if(xh=="bp64")cout<<"凌冬将至使用了冰天雪地,冻结！本回合"<<zh<<"攻击*0.39",bp64=1;
			if(xh=="bs")cout<<"冻结！本回合"<<zh<<"攻击*0.27",bp64=1;
		}
		if(zsd==3){
			hxjn++;
			if(sxjn>0)sxjn--;
			gpd=cgpd;
			cout<<"草系技能";
			if(xh=="bc")gpd+=cgpd,gpd*=0.9;
			if(xh=="bc"){
				cout<<" 中毒!";		
			}
		}
		cout<<",";
		if(zs=="1"){
			gp=wgp;	
			tscs++;	
		}
		else if(zs=="2"){
			sxjn++;
			if(cxjn>0)cxjn--;
    		gp=hgp;
    		hxcs++;
			if(zsd==2){
	    		gp=0.67*gp;
				gpd=1.5*gpd;					
			}
			if(zsd==3){
				gpd=0.67*gpd;
				gp=1.5*gp;	
			}
		}
		else if(zs=="3"){
			gp=sgp;
			if(hxjn>0)hxjn--;
			cxjn++;
			sxcs++;
			if(zsd==1){
				gpd=0.67*gpd;
				gp=1.5*gp;					
			}
			if(zsd==3){
				gp=0.67*gp;
				gpd=1.5*gpd;	
			}
		}
		else if(zs=="4"){
			gp=cgp;
			if(sxjn>0)sxjn--;
			hxjn++;
			cxcs++;
			if(zsd==1){
		    	gp=0.67*gp;
			    gpd=1.5*gpd;					
			}
			if(zsd==2){
				gpd=0.67*gpd;
				gp=1.5*gp;	
			}
		}
		else if(zs=="5"&&mpj>=qjnmp){
			for(int i=rs;i>0;i--)
			hpds[i]-=qjnlv*2.7-qjnlv+rand()%3*qjnlv;
			mpj-=qjnmp;
			cout<<"使用 天崩地裂"<<endl;
			cout<<"敌人全体受到"<<(int)(qjnlv*2.7)<<"点伤害"<<endl;
		}
		else if(zs=="6"&&mpj>=hxjnmp){
			hp+=hxjnlv*16;
			cout<<"使用 天降甘露"<<endl;
			mpj-=hxjnmp;
			cout<<"回复"<<(int)(hxjnlv*16)<<"HP"<<endl;
		}
		else if(zs=="7"&&sx=="体"&&mpj>=tjnmp){
			mpj-=tjnmp;
			hpds[rs]-=2.7*tjnlv;
			if(rs>1)hpds[rs-1]-=2.1*tjnlv;
			if(rs>2)hpds[rs-2]-=1.5*tjnlv;
			cout<<"使用 一箭三雕"<<endl;
			cout<<"对手"<<rs<<"受到"<<2.7*tjnlv<<"点伤害"<<endl;
			if(rs>1)cout<<"对手"<<rs-1<<"受到"<<2.1*tjnlv<<"点伤害"<<endl;
			if(rs>2)cout<<"对手"<<rs-2<<"受到"<<1.5*tjnlv<<"点伤害"<<endl;
		}else if(zs=="7"&&sx=="火"&&mpj>=hjnmp){
			mpj-=hjnmp;
			hxjn=3;
			cout<<"使用 烈火熊熊"<<endl;
			cout<<"对手前三名受到灼烧伤害"<<hjnlv*0.7<<"三回合"<<endl;
		}else if(zs=="7"&&sx=="水"&&mpj>=sjnmp){
		    cout<<"使用 滴水成冰"<<endl;
		    mpj-=sjnmp;
		    cout<<"对手减伤"<<sjnlv*2.1<<"三回合"<<endl;
		    sxjn=3;
		}else if(zs=="7"&&sx=="草"&&mpj>=cjnmp){
				    cout<<"使用 百毒入侵"<<endl;
				    mpj-=cjnmp;
				    cout<<"对手中毒"<<cjnlv*0.52<<"叠"<<cxjn+2<<"层"<<endl;
				    cxjn+=2;
				}
		else{
			gp=wgp;
			tscs++;
		}
			gp+=rand()%10;
					gp-=5;
			gpd+=rand()%10;
				gpd-=5;
		shp=gpd-fyp;
		if(shp<=1){
			shp=1;//TODO
		}
		if((rand()%1000)<bdssglg){
			shp=0;//TODO
			cout<<"触发 身手敏捷！"<<endl;
		}else if(rand()%200<bdysglg){
			cout<<"触发 一身反骨！对手"<<rs<<"受到"<<(int)(bdysgpg/100*shpd)<<"点伤害"<<endl;
			hpds[rs]-=bdysgpg/100*shpd;
		}if(xh=="bt"){
					cout<<""<<zh<<"受到了"<<1.5*shp<<"点伤害，"<<endl;
					cout<<""<<zh<<"受到了"<<shp<<"点伤害，"<<endl;
					cout<<""<<zh<<"受到了"<<0.5*shp<<"点伤害，"<<endl;
				}
		else if(sxjn<=0)cout<<""<<zh<<"受到了"<<rs<<"*"<<shp<<"点伤害，";
		else if(shp-sjnlv*2.1<=1)cout<<""<<zh<<"受到了"<<rs<<"*"<<1<<"点伤害，";
		else cout<<""<<zh<<"受到了"<<rs<<"*"<<shp-sjnlv*2.1<<"点伤害，";
		sxjn--;
		if(xh=="bh")shp+=500;
		if(xh=="bt")hp-=2*shp;
		else if(sxjn<=0)hp-=shp*rs;
		else if(shp-sjnlv*2.1<=1)hp-=1*rs;
		else hp-=(shp-sjnlv*2.1)*rs;
		if(hp<=0){
			cout<<"剩余生命值为0"<<endl;
			if(lvdg>0&&xh=="1")lvdg--;
			sbcs++;
			return 0;
		}else{
			cout<<"剩余生命值为"<<hp<<endl;
		}
		if(hp<=bdnshpg&&hp>0){
			gp+=gp*(bdnsgpg/100);
			cout<<"触发 宁死不屈！伤害+"<<bdnsgpg<<"%"<<endl;
		}
		if((rand()%200)<bdwmglg){
			gp+=gp*(bdwmgpg/100);
			cout<<"触发 无名之怒！伤害+"<<bdwmgpg<<"%"<<endl;
		}
		shpd=gp-fypd;
		if(bp64&&xh=="bp64")shpd*=0.39,bp64=0;
		else if(bp64)shpd*=0.52,bp64=0;
		if(shpd<=1){
			shpd=1;//TODO
		}
		if(hp>0){ 
		cout<<"对手"<<rs<<"受到了"<<shpd<<"点伤害，";
		if(hxjn>0)for(int i=rs;i>rs-3&&i>0;i--){hpds[i]-=hjnlv*0.7;if(xh=="sj")sjsh+=hjnlv*0.7;}		
	    hxjn--;
	    if(cxjn>0)for(int i=rs;i>0;i--){hpds[i]-=cjnlv*0.27*cxjn;if(xh=="sj")sjsh+=cjnlv*1.3*cxjn;}
		hpds[rs]-=shpd;
		if(xh=="sj")sjsh+=shpd;
		if(hpds[rs]<=0)hpds[rs]=0;
		cout<<"剩余生命值为"<<hpds[rs]<<endl;//TODO
		if(hpds[rs]<=0){rs--,jbrs++;
		if(xh=="xj")sjtzq++;}
			for(int j=rs;j>0&&hpds[j]>0;j--){
			cout<<"对手"<<j<<" HP:";
			for(int i=0;i<hpds[j]*39/hpd;i++)cout<<"■";
			for(int i=hpds[j]*39/hpd;i<39;i++)cout<<"□";
			cout<<" "<<hpds[j]<<"/"<<hpd<<endl;
			}
			
			cout<<endl;
		if(!rs&&hp>0){
									//TODO
									if(xh=="1")lvdg++;
									slcs++;
									return 1;				
								}
		}
	}
	return -1;
}
void saolei(int xx,int xy){
	for(int ix2=xx-1;ix2<=xx+1;ix2++)
		for(int jx2=xy-1;jx2<=xy+1;jx2++){
			if(sl2[ix2][jx2]=='#'&&(ix2!=xx||jx2!=xy)&&ix2>=0&&ix2<15&&jx2>=0&&jx2<15){
			    sl2[ix2][jx2]=sl[ix2][jx2];
			    kgz++;
			    if(sl2[ix2][jx2]==' ')saolei(ix2,jx2);
			}
		}
}
void qqdd(){
	string n;
	cout<<"(按任意键并Enter 确定)"<<endl;
	cin>>n;
}
ll szi(){
	string n;
	ll d1=0,p;
	cin>>n;
	for(int s=0;s<(int)n.length();s++)p=pow(10,n.length()-s-1)+0.5,d1+=(n[s]-48)*p;
	return d1;			
}
ll sj(){
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	return (ll)sys.wSecond+sys.wMinute*60+sys.wHour*3600+sys.wDay*24*3600;
}
int main(){
	cout<<"请选择存档（1-9）"<<endl<<endl;
	ifstream g;
	g.open("system.bat");
	for(int i=1;i<10;i++)g>>cdmzz[i].n>>cdmzz[i].lv>>cdmzz[i].zd;
	cout<<"序号  等级   战斗力    账号名"<<endl;
	for(int i=1;i<10;i++)cout<<"  "<<i<<"  "<<setw(4)<<cdmzz[i].lv<<setw(10)<<cdmzz[i].zd<<"    "<<cdmzz[i].n<<endl;
	
	
	while(cd<'1'||cd>'9'){
	
	cout<<"按下序号并按下Enter即可"<<endl;
	cin>>cd;
	}
		ifstream f;
		if(cd=='1')f.open("data.bat");
	    if(cd=='2')f.open("wanhd.bat");
	    if(cd=='3')f.open("521027.bat");
	    if(cd=='4')f.open("caoshen.bat");
	    if(cd=='5')f.open("gyc.bat");
	    if(cd=='6')f.open("cs666.bat");
	    if(cd=='7')f.open("wbrx.bat");
	    if(cd=='8')f.open("nydykxnhd.bat");
	    if(cd=='9')f.open("w2199.bat");
	string cc="0";
	srand((unsigned)time(NULL));
	string cz="1";
	string zh="未名11001100",mm="123456",mmy="123456",mmy1;
	
	f>>zh;
	f>>mm;
	f>>mmy;
	
	
	int lv=1,sjjl,yz11=1;
	string mmmm;
	ld exp=0,hpg=160,wgp=25,hgp=30,sgp=30,cgp=30,hl=100,fyp=0,wgpdg=0,hgpdg=0,sgpdg=0,cgpdg=0,hpdg=0,fypdg=0,expg=20,jb=0;
	string sx="无";
	ld tqhsp=0,hqhsp=0,sqhsp=0,cqhsp=0,tqhs=0,hqhs=0,sqhs=0,cqhs=0,xhlp=0,dhlp=0,tieli=0,tongli=0,gangli=0,tieding=0,tongding=0,gangding=0,smzy=0,tiepian=0,tongpian=0,gangpian=0;
		ll cs=0,gq=1,wjpd=0,wjcs=0,xwjcs=0;
		ld bdnsgpg=1,bdnshpg=1,bdwmglg=1,bdwmgpg=1,bdssglg=1,bdysglg=1,bdysgpg=1;
		ll bdnslv=0,bdwmlv=0,bdsslv=0,bdyslv=0;
		f>>lv>>exp>>hpg>>wgp>>hgp>>sgp>>cgp>>hl>>fyp>>wgpdg>>hgpdg>>sgpdg>>cgpdg>>hpdg>>lvdg>>fypdg>>expg>>jb>>cs>>gq>>wjpd>>wjcs>>xwjcs>>sx;
		f>>tqhsp>>hqhsp>>sqhsp>>cqhsp>>tqhs>>hqhs>>sqhs>>cqhs>>xhlp>>dhlp>>tieli>>tongli>>gangli>>tieding>>tongding>>gangding>>smzy>>tiepian>>tongpian>>gangpian;
		f>>bdnsgpg>>bdnshpg>>bdwmglg>>bdwmgpg>>bdssglg>>bdysglg>>bdysgpg;
		f>>bdnslv>>bdwmlv>>bdsslv>>bdyslv;
		ll bdjhsp=0,bdjhs=0,bdsjs=0;
		f>>bdjhsp>>bdjhs>>bdsjs;
		f>>dlcs>>xxcs>>zdcs>>slcs>>sbcs>>gmcs>>gzcs>>bbcs>>bosscs>>yxcs>>wjccs>>tscs>>hxcs>>sxcs>>cxcs>>jbrs;
		ll cjj=0;
		if(yxcs){cout<<zh<<"，欢迎回来！"<<endl;
		    cout<<"请输入密码"<<endl;
		    while(yz11){
				cin>>mmmm;
		        if(mmmm==mm)yz11=0;
		        else cout<<"密码错误！"<<endl;
			}
		}
		
		if(yxcs){cout<<"读取数据中..."<<endl;
		SYSTEMTIME sys;
		GetLocalTime(&sys);
		int bbbb=rand()%8;
		cout<<"公告：";
		if(bbbb==0)cout<<"铁粒，铜粒，钢粒，激活碎片，技能碎片都是9合1哦"<<endl;
		if(bbbb==1)cout<<"只有金属片才能通装备哦，金属锭是不行的"<<endl;
		if(bbbb==2)cout<<"金属锭可通过压制合成金属片，需要消耗1金币"<<endl;
		if(bbbb==3)cout<<"强化石，生命之源，及金属片才能在“强化”中装备！"<<endl;
		if(bbbb==4)cout<<"时间转换卡只有完成特定任务才能获得哦"<<endl;
		if(bbbb==5)cout<<"锻炼是提升实力的最佳方法，其次是装备，被动等"<<endl;
		if(bbbb==6)cout<<"如果感到实力不强，可以试着在“赚金币”中做题赚金币哦"<<endl;
		if(bbbb==7)cout<<"属性克制：水克火，火克草，草克水"<<endl;
		for(int i=0;i<27;i++){ int sj=pow(i,1.9);for(long long int j=0;j<5210.27*pow(yxcs,0.1)*1.3*sj*0.4*1.3;j++);cout<<".";}
		if(yxcs!=3)cout<<endl<<"读取成功！"<<endl;}
		f>>cjj;
		ll ho=0,mi=0,se=0,mse=0;
		f>>ho>>mi>>se>>mse;
		ll zhhm=0,zhmh=0,zhmf=0,zhfm=0,zhxf=0,zhfx=0;
		f>>zhhm>>zhmh>>zhmf>>zhfm>>zhxf>>zhfx;
		ll b11=0,b12=0,b13=0,b11b=0,b12b=0,b13b=0,b21=0,b22=0,b23=0,b21b=0,b22b=0,b23b=0,b31=0,b32=0,b33=0,b31b=0,b32b=0,b33b=0,b41=0,b42=0,b43=0,b41b=0,b42b=0,b43b=0,b51=0,b52=0,b53=0,b51b=0,b52b=0,b53b=0;
		f>>b11>>b12>>b13>>b11b>>b12b>>b13b>>b21>>b22>>b23>>b21b>>b22b>>b23b>>b31>>b32>>b33>>b31b>>b32b>>b33b>>b41>>b42>>b43>>b41b>>b42b>>b43b>>b51>>b52>>b53>>b51b>>b52b>>b53b;
		ll b61=0,b62=0,b63=0,b64=0,b65=0,b61b=0,b62b=0,b63b=0,b64b=0,b65b=0,b71=0,b72=0,b73=0,b74=0,b75=0,b76=0,b77=0,b71b=0,b72b=0,b73b=0,b74b=0,b75b=0,b76b=0,b77b=0;
		f>>b61>>b62>>b63>>b64>>b65>>b61b>>b62b>>b63b>>b64b>>b65b>>b71>>b72>>b73>>b74>>b75>>b76>>b77>>b71b>>b72b>>b73b>>b74b>>b75b>>b76b>>b77b;
		ll jntpsp=0,jnsjs=0,tjnlv=0,hjnlv=0,sjnlv=0,cjnlv=0,tjnmp=0,hjnmp=0,sjnmp=0,cjnmp=0,qjnlv=0,qjnmp=0,mp=20,mps=0,jntps=0,mqd=0,mhd=0,hxjnlv=0,hxjnmp=0,zhxt=0,yxjs=0;
		f>>jntpsp>>jnsjs>>tjnlv>>hjnlv>>sjnlv>>cjnlv>>tjnmp>>hjnmp>>sjnmp>>cjnmp>>qjnlv>>qjnmp>>mp>>mps>>jntps>>mqd>>mhd>>hxjnlv>>hxjnmp>>sjsh>>sjtzq>>zhxt>>yxjs;
		ll wx1=5,wy1=6,wx2=5,wy2=4,wx3=4,wy3=4,wx4=3,wy4=3,wx5=4,wy5=8,wx6=7,wy6=9,wx7=8,wy7=4,wx8=9,wy8=4,wx9=10,wy9=3,wxa=6,wya=4,wxb=8,wyb=6,wxc=5,wyc=11,wxd=9,wyd=11,wxe=8,wye=12,wx0=6,wy0=7,wxm=9,wym=9,wxf=9,wyf=10,wxg=9,wyg=6,wxh=4,wyh=6,wxgt=1,wygt=1,wxi=8,wyi=3;
		f>>wx1>>wy1>>wx2>>wy2>>wx3>>wy3>>wx4>>wy4>>wx5>>wy5>>wx6>>wy6>>wx7>>wy7>>wx8>>wy8>>wx9>>wy9>>wxa>>wya>>wxb>>wyb>>wxc>>wyc>>wxd>>wyd>>wxe>>wye>>wx0>>wy0>>wxm>>wym>>wxf>>wyf>>wxg>>wyg>>wxh>>wyh>>wxgt>>wygt>>wxi>>wyi>>x>>y;
		GetLocalTime(&sys);
		ll s2048=0,year=sys.wYear,month=sys.wMonth,day=sys.wDay,qd=sj(),sxq=sys.wDayOfWeek-1,zxq=sys.wDayOfWeek,xti=sys.wDay,zti=sys.wDay,slsj=99999999;
		f>>s2048>>year>>month>>day>>qd>>sxq>>zxq>>xti>>zti>>slsj;
		ll yxfs=0,gjb=0;
		f>>yxfs>>gjb;
		yxcs++;
		f.close();
		char wz;
		ll hlsj=sj();
		d=0;
		if(sj()<qd)qd=sj()-3600*24;
		hl+=(sj()-qd)/600;
		qd=sj();
		if(yxjs)cout<<"第"<<yxjs+1<<"周目"<<endl;
		if(yxcs==1){
			cout<<"系统：请输入您的名字：";
			cout<<"系统：输入名字并按下Enter即可"<<endl;
			while((int)zh.length()>10){
				cin>>zh;
				if((int)zh.length()>10)cout<<"名字长度过长！请输入不超过10个字符（1汉字=2字符）"<<endl;
			}
			cout<<"系统：您好,"<<zh<<",欢迎来到time!"<<endl;
			qqdd();
			cout<<"系统：由于某种原因，"<<zh<<"被困在了"<<year<<"年"<<month<<"月"<<day<<"日，为了查明原因，请您收集时间碎片，逃离这天，寻找真相！"<<endl;
			qqdd();
			int yz=0;
				while(yz==0){
					cout<<"请设置密码"<<endl;
					cin>>mm;
					cout<<"请再次确认密码"<<endl;
					cin>>mmy;
					
					if(mm==mmy){
					
						yz=1;
					}else{cout<<"密码不对应!"<<endl;}
				}
		}
		int xsyd=1,xsyd1=0;
		if(yxcs>=1&&yxcs<=2&&xsyd){
			cout<<"系统：以下是新手引导（0 取消新手引导  1 继续）"<<endl;
			cout<<"按下1并Enter即可"<<endl;
			xsyd=szi();
		}
		if(yxcs==3){
			cout<<"系统：您已经不是新手了，将停止为您新手引导"<<endl;
			qqdd();
		}
		if(yxcs==4){
			yxcs--;
			cout<<endl<<"读取失败！"<<endl;
			qqdd();
			cout<<zh<<"：读取失败？怎么回事？"<<endl;
			qqdd();
			cout<<"系统：怎么？4次才失败1次，知足吧！"<<endl;
			qqdd();
			cout<<zh<<"：你这话什么意思？什么叫“4次才失败1次”？还有这道理？"<<endl;
			qqdd();
			cout<<"系统：现在的人真是太娇贵了，这样就发火了？"<<endl;
			qqdd();
			cout<<zh<<"：你最好睁开眼睛好好看看我是谁？我要是不玩这游戏还有你的戏份？"<<endl;
			qqdd();
			cout<<"系统：这我不管，代码是这么写的，你找作者去（心虚）!"<<endl;
			qqdd();
			cout<<"1027gyc：发生什么事了？"<<endl;
			qqdd();
			cout<<zh<<"：作者，你给我好好听清楚，你要是不让那家伙滚蛋，我就不玩你这破游戏了！"<<endl;
			qqdd();
			cout<<"1027gyc：欸，别，别！请息怒，有话好说，有话好说。"<<endl;
			qqdd();
			cout<<zh<<"：你看看你造的那家伙，说话不过脑子，什么叫“4次才失败1次”？你自己看着办吧。"<<endl;
			qqdd();
			cout<<"1027gyc：原来是这样，我马上去修理它，我送您一些东西，求您千万别退游！"<<endl;
			qqdd();
			cout<<"获得被动突破碎片*27&技能突破碎片*9"<<endl;
			bdjhsp+=27;
			jntpsp+=9;
			qqdd();
			cout<<"(1027gyc：看你干的好事，赶紧给我回去改代码！)"<<endl;
			qqdd();
			yxcs++;
			cz="0";
		}
		zxq=sys.wDayOfWeek;
		zti=sys.wDay;
		if(zxq!=sxq||xti!=zti){
			cout<<"今日签到：";
			sxq=zxq;
			xti=zti;
			if(zxq==1)cout<<"时间转换卡_h->min*1"<<endl,zhxf++;
			if(zxq==2)cout<<"技能突破碎片*4"<<endl,jntpsp+=4;
			if(zxq==3)cout<<"被动突破碎片*8"<<endl,bdjhsp+=8;
			if(zxq==4)cout<<"体强化碎片*27"<<endl,tqhsp+=27;
			if(zxq==5)cout<<"技能升级石*1"<<endl,jnsjs++;
			if(zxq==6)cout<<"被动升级石*2"<<endl,bdsjs+=2;
			if(zxq==7)cout<<"金币*9"<<endl;
			qqdd();
		}
	while(cz!="0"){
		zy:
		cout<<"---------------------------主页---------------------------"<<endl;
		cout<<"您当前的时间："<<ho<<"时"<<mi<<"分"<<se<<"秒"<<mse<<"毫秒"<<endl;
		if(yxcs>=1&&yxcs<=2&&xsyd&&!xsyd1)cout<<"系统：这是您的时间碎片，收集满1天即可通关"<<endl,qqdd();
	//	x++;
		dp[x][y]='.';
		cz=".";
		while(cz=="."){
			for(int i=0;i<13;i++)for(int j=0;j<14;j++)dp[i][j]='.';
					dp[wx1][wy1]='1';
					dp[wx2][wy2]='2';
					dp[wx3][wy3]='3';
					if(!cs&&lv>=20)dp[wx4][wy4]='4';
					dp[wx5][wy5]='5';
					dp[wx6][wy6]='6';
					dp[wx7][wy7]='7';
					dp[wx8][wy8]='8';
					dp[wx9][wy9]='9';
					dp[wxa][wya]='a';
					dp[wxb][wyb]='b';
					dp[wxc][wyc]='c';
					dp[wxd][wyd]='d';
					dp[wxe][wye]='e';
					dp[wx0][wy0]='0';
					dp[wxm][wym]='*';
					dp[wxf][wyf]='f';
					dp[wxg][wyg]='g';
					dp[wxh][wyh]='h';
					dp[wxgt][wygt]='!';
					dp[wxi][wyi]='i';
					//dp[x][y]='#';
		for(int i=0;i<13;i++){
				    for(int j=0;j<14;j++){if(i==x&&j==y)cout<<'#'<<" ";
						else cout<<dp[i][j]<<" ";
					
					}
				        cout<<endl;
						}
						
						cout<<"(w 上  a 左  s 下  d 右  e 背包  m 图示  * 设置";
						if(dp[x][y]=='1')cout<<"  = 开始锻炼";
						if(dp[x][y]=='2')cout<<"  = 查看信息";
						if(dp[x][y]=='3')cout<<"  = 进行强化";
						if(dp[x][y]=='4')cout<<"  = 开启转属";
						if(dp[x][y]=='5')cout<<"  = 进入关卡";
						if(dp[x][y]=='6')cout<<"  = 进入无尽";
						if(dp[x][y]=='7')cout<<"  = 修改名字";
						if(dp[x][y]=='8')cout<<"  = 查看规则";
						if(dp[x][y]=='9')cout<<"  = 查看背包";
						if(dp[x][y]=='0')cout<<"  = 退出游戏";
						if(dp[x][y]=='a')cout<<"  = 被动技能";
						if(dp[x][y]=='b')cout<<"  = 挑战副本";
						if(dp[x][y]=='c')cout<<"  = 统计信息";
						if(dp[x][y]=='d')cout<<"  = 进入商店";
						if(dp[x][y]=='e')cout<<"  = 开始做题";
						if(dp[x][y]=='f')cout<<"  = 进入抽奖";
						if(dp[x][y]=='g')cout<<"  = 时间转换";
						if(dp[x][y]=='h')cout<<"  = 主动技能";
						if(dp[x][y]=='i')cout<<"  = 修改密码";
						if(dp[x][y]=='*')cout<<"  = 进入扫雷";
						if(dp[x][y]=='!')cout<<"  = 删除存档";
						//if(dp[x][y]=='1')cout<<"  = 进入锻炼";
						cout<<")"<<endl;
						if(yxcs>=1&&yxcs<=2&&xsyd&&!xsyd1)cout<<"系统：按下e并Enter查看背包"<<endl;
						if(yxcs>=1&&yxcs<=2&&xsyd1==1&&xsyd)cout<<"系统：没错就是这样！"<<endl<<"现在请按w并Enter向上移动(#是你的位置)"<<endl;
						if(yxcs>=1&&yxcs<=2&&xsyd1==2&&xsyd)cout<<"系统：其他方向同理！(.代表空地)"<<endl<<"现在请按m并Enter查看其他字符的含义"<<endl;
						if(yxcs<=2&&xsyd1==3&&xsyd)cout<<"系统：现在移动到对应的字符上开始游玩吧！"<<endl,xsyd1++;
						if(yxcs<=2&&xsyd&&dp[x][y]!='.'&&dp[x][y]!='0')cout<<"按下“=”可进入此处！"<<endl,xsyd=0;
						//if(hl<10&&yxcs<=13)cout<<"系统：您的活力值快耗尽了，请打无尽提升活力吧！"<<endl;
						if(1){
							ofstream fo,go;
										if(cd=='1')fo.open("data.bat");
									    if(cd=='2')fo.open("wanhd.bat");
									    if(cd=='3')fo.open("521027.bat");
									    if(cd=='4')fo.open("caoshen.bat");
									    if(cd=='5')fo.open("gyc.bat");
									    if(cd=='6')fo.open("cs666.bat");
										if(cd=='7')fo.open("wbrx.bat");
									    if(cd=='8')fo.open("nydykxnhd.bat");
									    if(cd=='9')fo.open("w2199.bat");
										fo<<zh<<" "<<mm<<" "<<mmy<<" "<<lv<<" "<<exp<<" "<<hpg<<" "<<wgp<<" "<<hgp<<" "<<sgp<<" "<<cgp<<" "<<hl<<" "<<fyp<<" "<<wgpdg<<" "<<hgpdg<<" "<<sgpdg<<" "<<cgpdg<<" "<<hpdg<<" "<<lvdg<<" "<<fypdg<<" "<<expg<<" "<<jb<<" "<<cs<<" "<<gq<<" "<<wjpd<<" "<<wjcs<<" "<<xwjcs<<" "<<sx<<endl;
												fo<<tqhsp<<" "<<hqhsp<<" "<<sqhsp<<" "<<cqhsp<<" "<<tqhs<<" "<<hqhs<<" "<<sqhs<<" "<<cqhs<<" "<<xhlp<<" "<<dhlp<<" "<<tieli<<" "<<tongli<<" "<<gangli<<" "<<tieding<<" "<<tongding<<" "<<gangding<<" "<<smzy<<" "<<tiepian<<" "<<tongpian<<" "<<gangpian<<endl;
										        fo<<bdnsgpg<<" "<<bdnshpg<<" "<<bdwmglg<<" "<<bdwmgpg<<" "<<bdssglg<<" "<<bdysglg<<" "<<bdysgpg<<endl;
										        fo<<bdnslv<<" "<<bdwmlv<<" "<<bdsslv<<" "<<bdyslv<<endl;
										        fo<<bdjhsp<<" "<<bdjhs<<" "<<bdsjs<<endl;
										        fo<<dlcs<<" "<<xxcs<<" "<<zdcs<<" "<<slcs<<" "<<sbcs<<" "<<gmcs<<" "<<gzcs<<" "<<bbcs<<" "<<bosscs<<" "<<yxcs<<" "<<wjccs<<" "<<tscs<<" "<<hxcs<<" "<<sxcs<<" "<<cxcs<<" "<<jbrs<<endl;
										        fo<<cjj<<endl;
										        fo<<ho<<" "<<mi<<" "<<se<<" "<<mse<<endl;
										        fo<<zhhm<<" "<<zhmh<<" "<<zhmf<<" "<<zhfm<<" "<<zhxf<<" "<<zhfx<<endl;
										        fo<<b11<<" "<<b12<<" "<<b13<<" "<<b11b<<" "<<b12b<<" "<<b13b<<" "<<b21<<" "<<b22<<" "<<b23<<" "<<b21b<<" "<<b22b<<" "<<b23b<<" "<<b31<<" "<<b32<<" "<<b33<<" "<<b31b<<" "<<b32b<<" "<<b33b<<" "<<b41<<" "<<b42<<" "<<b43<<" "<<b41b<<" "<<b42b<<" "<<b43b<<" "<<b51<<" "<<b52<<" "<<b53<<" "<<b51b<<" "<<b52b<<" "<<b53b<<endl;
										        fo<<b61<<" "<<b62<<" "<<b63<<" "<<b64<<" "<<b65<<" "<<b61b<<" "<<b62b<<" "<<b63b<<" "<<b64b<<" "<<b65b<<" "<<b71<<" "<<b72<<" "<<b73<<" "<<b74<<" "<<b75<<" "<<b76<<" "<<b77<<" "<<b71b<<" "<<b72b<<" "<<b73b<<" "<<b74b<<" "<<b75b<<" "<<b76b<<" "<<b77b<<endl;
										        fo<<jntpsp<<" "<<jnsjs<<" "<<tjnlv<<" "<<hjnlv<<" "<<sjnlv<<" "<<cjnlv<<" "<<tjnmp<<" "<<hjnmp<<" "<<sjnmp<<" "<<cjnmp<<" "<<qjnlv<<" "<<qjnmp<<" "<<mp<<" "<<mps<<" "<<jntps<<" "<<mqd<<" "<<mhd<<" "<<hxjnlv<<" "<<hxjnmp<<" "<<sjsh<<" "<<sjtzq<<" "<<zhxt<<" "<<yxjs<<endl;
										        fo<<wx1<<" "<<wy1<<" "<<wx2<<" "<<wy2<<" "<<wx3<<" "<<wy3<<" "<<wx4<<" "<<wy4<<" "<<wx5<<" "<<wy5<<" "<<wx6<<" "<<wy6<<" "<<wx7<<" "<<wy7<<" "<<wx8<<" "<<wy8<<" "<<wx9<<" "<<wy9<<" "<<wxa<<" "<<wya<<" "<<wxb<<" "<<wyb<<" "<<wxc<<" "<<wyc<<" "<<wxd<<" "<<wyd<<" "<<wxe<<" "<<wye<<" "<<wx0<<" "<<wy0<<" "<<wxm<<" "<<wym<<" "<<wxf<<" "<<wyf<<" "<<wxg<<" "<<wyg<<" "<<wxh<<" "<<wyh<<" "<<wxgt<<" "<<wygt<<" "<<wxi<<" "<<wyi<<" "<<x<<" "<<y<<endl;
										        fo<<s2048<<" "<<year<<" "<<month<<" "<<day<<" "<<qd<<" "<<sxq<<" "<<zxq<<" "<<xti<<" "<<zti<<" "<<slsj<<" "<<endl;
												fo<<yxfs<<" "<<gjb<<" "<<endl;
												fo<<endl;
												go.open("system.bat");
												cdmzz[cd-48].n=zh; 
																cdmzz[cd-48].zd=hpg*10+(wgp+hgp+sgp+cgp)/4*50+fyp*50+bdnslv*lv/2+bdwmlv*lv/2+bdyslv*lv/2+bdsslv*lv/2+(tjnlv+hjnlv+sjnlv+cjnlv+qjnlv+hxjnlv)*50+mp*10+mps*50;
																cdmzz[cd-48].lv=lv; 
																for(int i=1;i<10;i++)go<<cdmzz[i].n<<" "<<cdmzz[i].lv<<" "<<cdmzz[i].zd<<" ";
						}
						if(sj()<hlsj)hlsj=sj();
						if(sj()>hlsj){
							int jjj=(sj()-hlsj)/60;
							hlsj+=jjj*60;
							hl+=jjj;
							gjb+=jjj;
						}
						
						qd=sj();
						if(hl>100)hl=100;
						cin>>wz;
						if(wz=='w'&&x!=0)x--,xsyd1++;
						if(wz=='s'&&x!=12)x++;
						if(wz=='a'&&y!=0)y--;
						if(wz=='d'&&y!=13)y++;
						if(wz=='e')cz="9",xsyd1++;
						if(wz=='m')cz="?",xsyd1++;
						if(wz=='*')cz="z",xsyd1++;
						if(wz=='=')cz[0]=dp[x][y];
						
										
												
						
						}
						
		
		if(cz=="0"){}
		else if(cz=="z"){
			cout<<"请选择要编辑位置的项目：（1 锻炼  2 信息  3 强化  4 转属  5 关卡  6 无尽  7 改名  8 规则  9 背包  a 被动  b BOSS  c 统计  d 商店  e 赚金币  f 抽奖  g 时间转换  h 主动技能  i 修改密码  ! 删除存档  0 退出  * 扫雷  / 恢复初始设置）"<<endl;
			string szsz;
			cin>>szsz;
			if(szsz=="/"){string sz1;
			cout<<"是否恢复初始设置？（1 是  0 否）"<<endl;
			cin>>sz1;
							if(sz1=="1")wx1=5,wy1=6,wx2=5,wy2=4,wx3=4,wy3=4,wx4=3,wy4=3,wx5=4,wy5=8,wx6=7,wy6=9,wx7=8,wy7=4,wx8=9,wy8=4,wx9=10,wy9=3,wxa=6,wya=4,wxb=8,wyb=6,wxc=5,wyc=11,wxd=9,wyd=11,wxe=8,wye=12,wx0=6,wy0=7,wxm=9,wym=9,wxf=9,wyf=10,wxg=9,wyg=6,wxh=4,wyh=6,wxgt=1,wygt=1,wxi=8,wyi=3;
					if(sz1=="1")cout<<"修改成功！"<<endl;
					
					qqdd();
						goto zy;
						}
			
			ll szx=100,szy=100;
			while(dp[szx-1][szy-1]!='.'&&dp[szx-1][szy-1]!='#'){
				szx=100,szy=100;
				
			while(szx<1||szx>13){cout<<"请输入您想要设置此项目的行：";szx=szi();
				if(szx<1||szx>13)cout<<"请输入正确的位置!"<<endl;}
			
			while(szy<1||szy>14){cout<<"请输入您想要设置此项目的列：";szy=szi();
							if(szy<1||szy>14)cout<<"请输入正确的位置!"<<endl;}
							if(dp[szx-1][szy-1]!='.'&&dp[szx-1][szy-1]!='#')cout<<"此位置已被占用！"<<endl;
							}
			if(szsz=="1"){
				wx1=szx-1;
				wy1=szy-1;
			}
			 
			else if(szsz=="2"){
				wx2=szx-1;
				wy2=szy-1;
			}
			else if(szsz=="3"){
							wx3=szx-1;
							wy3=szy-1;
						}
			else if(szsz=="4"){
							wx4=szx-1;
							wy4=szy-1;
						}
			else if(szsz=="5"){
							wx5=szx-1;
							wy5=szy-1;
						}
			else if(szsz=="6"){
							wx6=szx-1;
							wy6=szy-1;
						}
			else if(szsz=="7"){
							wx7=szx-1;
							wy7=szy-1;
						}
			else if(szsz=="8"){
							wx8=szx-1;
							wy8=szy-1;
						}
			else if(szsz=="9"){
							wx9=szx-1;
							wy9=szy-1;
						}
			else if(szsz=="0"){
							wx0=szx-1;
							wy0=szy-1;
						}
			else if(szsz=="a"){
							wxa=szx-1;
							wya=szy-1;
						}
			else if(szsz=="b"){
							wxb=szx-1;
							wyb=szy-1;
						}
			else if(szsz=="c"){
							wxc=szx-1;
							wyc=szy-1;
						}
			else if(szsz=="d"){
							wxd=szx-1;
							wyd=szy-1;
						}
			else if(szsz=="e"){
							wxe=szx-1;
							wye=szy-1;
						}
			else if(szsz=="f"){
							wxf=szx-1;
							wyf=szy-1;
						}
			else if(szsz=="g"){
							wxg=szx-1;
							wyg=szy-1;
						}
			else if(szsz=="h"){
							wxh=szx-1;
							wyh=szy-1;
						}
			else if(szsz=="i"){
							wxi=szx-1;
							wyi=szy-1;
						}
			else if(szsz=="*"){
							wxm=szx-1;
							wym=szy-1;
						}
			else if(szsz=="!"){
							wxgt=szx-1;
							wygt=szy-1;
						}
			cout<<"修改成功！"<<endl;
			qqdd();
		}
		else if(cz=="i"){
			cout<<"请输入原密码"<<endl;
			cin>>mmmm;
			if(mmmm==mm){
				int yz=0;
					while(yz==0){
					cout<<"请设置密码"<<endl;
					cin>>mm;
					cout<<"请再次确认密码"<<endl;
					cin>>mmy;		
					if(mm==mmy){
						yz=1;
					}else{cout<<"密码不对应!"<<endl;}
				}
			}else{cout<<"密码错误!"<<endl;qqdd();}
		}
		else if(cz=="h"){
			cout<<"主动技能"<<endl;
			cout<<"山崩地裂[群] lv:"<<qjnlv<<"  消耗mp:"<<qjnmp<<endl;
			cout<<"技能威力："<<qjnlv*2.7*3<<endl;
			if(qjnlv%15==0)cout<<"可突破！"<<endl;
			cout<<endl;
			cout<<"天降甘露[奶] lv:"<<hxjnlv<<"  消耗mp:"<<hxjnmp<<endl;
			cout<<"技能回复："<<hxjnlv*16<<endl;
			if(hxjnlv%15==0)cout<<"可突破！"<<endl;
			cout<<endl;
			cout<<sx<<"系专属技能"<<endl;
			if(sx=="体"){
				cout<<"一箭三雕[群] lv:"<<tjnlv<<"  消耗mp:"<<tjnmp<<endl;
				cout<<"技能威力："<<tjnlv*2.1*3<<endl;
				if(tjnlv%15==0)cout<<"可突破！"<<endl;
				cout<<endl;
			}else if(sx=="火"){
							cout<<"烈火熊熊[群] lv:"<<hjnlv<<"  消耗mp:"<<hjnmp<<endl;
							cout<<"技能威力："<<hjnlv*2.1*3<<endl;
							if(hjnlv%15==0)cout<<"可突破！"<<endl;
							cout<<endl;
						}
				else if(sx=="水"){
											cout<<"滴水成冰[控] lv:"<<sjnlv<<"  消耗mp:"<<sjnmp<<endl;
											cout<<"技能控制："<<sjnlv*2.1*3<<endl;
											if(sjnlv%15==0)cout<<"可突破！"<<endl;
											cout<<endl;
										}
			else if(sx=="草"){
										cout<<"百毒入侵[毒] lv:"<<cjnlv<<"  消耗mp:"<<cjnmp<<endl;
										cout<<"技能威力："<<cjnlv*0.52*5*3<<endl;
										if(cjnlv%15==0)cout<<"可突破！"<<endl;
										cout<<endl;
									}
				
			string h1;
			cout<<"(1 升级  0 返回)"<<endl;
			cin>>h1;
			if(h1=="1"){
				cout<<"(1 山崩地裂  2 天降甘露  3 专属技能)"<<endl;
				string h2;
				cin>>h2;
				if(h2=="1"){
					if(qjnlv%15!=0)
				        if(jnsjs)jnsjs--,qjnlv++,qjnmp+=10,cout<<"升级成功！"<<endl,qqdd();
				        else cout<<"升级石不足！"<<endl,qqdd();
				    else {
						if(jntps)jntps--,qjnlv++,qjnmp+=10,cout<<"突破成功！"<<endl,qqdd();
						else cout<<"突破石不足！"<<endl,qqdd();
					}
			    }
			    if(h2=="2"){
									if(hxjnlv%15!=0)
								        if(jnsjs)jnsjs--,hxjnlv++,hxjnmp+=25,cout<<"升级成功！"<<endl,qqdd();
								        else cout<<"升级石不足！"<<endl,qqdd();
								    else {
										if(jntps)jntps--,hxjnlv++,hxjnmp+=15,cout<<"突破成功！"<<endl,qqdd();
										else cout<<"突破石不足！"<<endl,qqdd();
									}
							    }
				if(h2=="3"){
					if(sx=="体"){
									if(tjnlv%15!=0)
								        if(jnsjs)jnsjs--,tjnlv++,tjnmp+=10,cout<<"升级成功！"<<endl,qqdd();
								        else cout<<"升级石不足！"<<endl,qqdd();
								    else {
										if(jntps)jntps--,tjnlv++,tjnmp+=10,cout<<"突破成功！"<<endl,qqdd();
										else cout<<"突破石不足！"<<endl,qqdd();
									}
					}
					if(sx=="火"){
														if(hjnlv%15!=0)
													        if(jnsjs)jnsjs--,hjnlv++,hjnmp+=10,cout<<"升级成功！"<<endl,qqdd();
													        else cout<<"升级石不足！"<<endl,qqdd();
													    else {
															if(jntps)jntps--,hjnlv++,hjnmp+=10,cout<<"突破成功！"<<endl,qqdd();
															else cout<<"突破石不足！"<<endl,qqdd();
														}
										}
					if(sx=="水"){
														if(sjnlv%15!=0)
													        if(jnsjs)jnsjs--,sjnlv++,sjnmp+=10,cout<<"升级成功！"<<endl,qqdd();
													        else cout<<"升级石不足！"<<endl,qqdd();
													    else {
															if(jntps)jntps--,sjnlv++,sjnmp+=10,cout<<"突破成功！"<<endl,qqdd();
															else cout<<"突破石不足！"<<endl,qqdd();
														}
										}
					if(sx=="草"){
														if(cjnlv%15!=0)
													        if(jnsjs)jnsjs--,cjnlv++,cjnmp+=10,cout<<"升级成功！"<<endl,qqdd();
													        else cout<<"升级石不足！"<<endl,qqdd();
													    else {
															if(jntps)jntps--,cjnlv++,cjnmp+=10,cout<<"突破成功！"<<endl,qqdd();
															else cout<<"突破石不足！"<<endl,qqdd();
														}
										}
			    }
			}
			
		}
		    else if(cz=="?")cout<<"（1 锻炼  2 信息  3 强化  4 转属  5 关卡  6 无尽  7 改名  8 规则  9 背包  a 被动  b BOSS  c 统计  d 商店  e 赚金币  f 抽奖  g 时间转换  h 主动技能  i 修改密码  ! 删除存档  0 存档并退出）"<<endl,qqdd();
	    	else if(cz=="!"){
				cout<<"是否删除此存档？(1 是  0 否)"<<endl;
				string scsc;
				cin>>scsc;
				if(scsc=="1"){
					if(cd=='1')remove("data.bat");
					if(cd=='2')remove("wanhd.bat");
				    if(cd=='3')remove("521027.bat");
				    if(cd=='4')remove("caoshen.bat");
				    if(cd=='5')remove("gyc.bat");
				    if(cd=='6')remove("cs666.bat");
				    if(cd=='7')remove("wbrx.bat");
				    if(cd=='8')remove("nydykxnhd.bat");
				    if(cd=='9')remove("w2199.bat");
				    cdmzz[cd-48].n="未注册";
				    cdmzz[cd-48].lv=0;
				    cdmzz[cd-48].zd=0;
				    cout<<"已删除！"<<endl;
				    qqdd();
				    goto js;
				}
				cout<<"已取消"<<endl;
				qqdd();
			}
			else if(cz=="1"){
			if(hl<5){
				cout<<"活力不足"<<endl;
			}
			else{
				dlcs++;
		ld hp=hpg;
			hl-=5;
			int lvd=rand()%(lv/5+4)+lvdg;
			
			ld hpd=rand()%(21*lvd)+9*lvd+cs*11*lvd,wgpd=rand()%(int)(2.1*lvd)+2.1*lvd,hgpd=rand()%(int)(2.9*lvd)+2.1*lvd,sgpd=rand()%(int)(2.9*lvd)+lvd*2.2,cgpd=rand()%(int)(2.9*lvd)+2.1*lvd,fypd=rand()%lvd+1*lvd;
			cout<<zh<<"遇到了"<<lvd<<"级的怪物，请开始您的战斗"<<endl;
			int rs=rand()%5+1;
			int jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,rs,"1",zh,hp,hpd/pow(rs,0.8),wgpd/rs,hgpd/rs,sgpd/rs,cgpd/rs,wgp,hgp,sgp,cgp,fyp/rs,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,fypd);
			if(jg==0){
				cout<<"你失败了！获得了"<<lvd<<"点经验"<<endl;
				exp+=lvd;
			}
			else if(jg==1){
				cout<<"你成功了！获得了"<<lvd*3.5<<"点经验"<<endl;
											exp+=lvd*3.5;
										    sjjl=rand()%3+1;
												cout<<"时间+"<<sjjl<<"ms!"<<endl;
												mse+=sjjl;
											for(int i=0;i<=13;i++){
												int jl=rand()%10270;
											if(jl>0&&jl<=269){
												cout<<"意外获得:";
											if(jl>0&&jl<=20){
												cout<<"体强化碎片"<<endl;
												tqhsp++;
											}
											if(jl>20&&jl<=35){
												cout<<"火强化碎片"<<endl;
												hqhsp++;
											}
											if(jl>35&&jl<=50){
												cout<<"水强化碎片"<<endl;
												sqhsp++;
											}
											if(jl>50&&jl<=70){
												cout<<"草强化碎片"<<endl;
												cqhsp++;
											}
											if(jl>70&&jl<=72){
												cout<<"体强化石"<<endl;
												tqhs++;
											}
											if(jl>72&&jl<=73){
												cout<<"火强化石"<<endl;
												hqhs++;
											}
											if(jl>73&&jl<=74){
												cout<<"水强化石"<<endl;
												sqhs++;
											}
											if(jl>74&&jl<=75){
												cout<<"草强化石"<<endl;
												cqhs++;
											}
											if(jl>75&&jl<=90){
												cout<<"铁粒"<<endl;
												tieli++;
											}
											if(jl>90&&jl<=100){
												cout<<"铜粒"<<endl;
												tongli++;
											}
											if(jl>100&&jl<=105){
												cout<<"钢粒"<<endl;
												gangli++;
											}
											if(jl>105&&jl<=109){
												cout<<"铁锭"<<endl;
												tieding++;
											}
											if(jl>109&&jl<=111){
												cout<<"铜锭"<<endl;
												tongding++;
											}
											if(jl>111&&jl<=113){
												cout<<"钢锭"<<endl;
												gangding++;
											}
											if(jl>113&&jl<=114){
												cout<<"铁片"<<endl;
												tiepian++;
											}
											if(jl>114&&jl<=115){
												cout<<"铜片"<<endl;
												tongpian++;
											}
											if(jl>115&&jl<=116){
												cout<<"钢片"<<endl;
												gangpian++;
											}
											if(jl>116&&jl<=125){
												cout<<"生命之源"<<endl;
												smzy++;
											}
											if(jl>125&&jl<=145){
												cout<<"小活力瓶"<<endl;
												xhlp++;
											}
											if(jl>145&&jl<=150){
												cout<<"大活力瓶"<<endl;
												dhlp++;
											}
											if(jl>150&&jl<=185){
												cout<<"被动升级石"<<endl;
												bdsjs++;
											}
											if(jl>185&&jl<=215){
												cout<<"被动突破碎片"<<endl;
												bdjhsp++;
											}
											if(jl>215&&jl<=216){
												cout<<"被动突破石"<<endl;
												bdjhs++;
											}
											if(jl>217&&jl<=232){
												cout<<"技能升级石"<<endl;
											    jnsjs++;
											}
											if(jl>232&&jl<=232){
									    		cout<<"技能突破石"<<endl;
												jntps++;
											}
											if(jl>232&&jl<=251){
									    		cout<<"技能突破碎片"<<endl;
									    		jntpsp++;
											}
											if(jl>251&&jl<=260){
												cout<<"魔回丹"<<endl;
												mhd++;
											}
											if(jl>260&&jl<=269){
												cout<<"魔泉丹"<<endl;
												mqd++;
											}
																						
											}
											}
			}
			
			while(exp>=20&&lv<=10){
				lv+=1;
				exp-=20;
				wgp+=1+rand()%3*0.9;
				hgp+=1+rand()%4*0.9;
				sgp+=1+rand()%4*0.9;
				cgp+=1+rand()%5*1.1;
				hpg+=6+rand()%9;
				fyp+=1;
				lvdg+=1;
				if(exp<20){
				cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
			}
			}
				while(exp>=50&&lv>10&&lv<=20){
							lv+=1;
							exp-=50;
						wgp+=1+rand()%3*0.9;
										hgp+=1+rand()%4*0.9;
										sgp+=1+rand()%4*0.9;
										cgp+=1+rand()%5*1.1;
										hpg+=6+rand()%9;
							fyp+=1;
							lvdg+=1;
							if(exp<50){
							cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
						}
						}
							while(exp>=100&&lv>20&&lv<=30){
										lv+=1;
										exp-=100;
									wgp+=1+rand()%3*0.9;
													hgp+=1+rand()%4*0.9;
													sgp+=1+rand()%4*0.9;
													cgp+=1+rand()%5*1.1;
													hpg+=6+rand()%9;
										fyp+=1;
										lvdg+=1;
										if(exp<100){
										cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
									}
									}
										while(exp>=200&&lv>30&&lv<=40){
													lv+=1;
													exp-=200;
												wgp+=1+rand()%3*0.9;
																hgp+=1+rand()%4*0.9;
																sgp+=1+rand()%4*0.9;
																cgp+=1+rand()%5*1.1;
																hpg+=6+rand()%9;
													fyp+=1;
													lvdg+=1;			
													if(exp<200){
													cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
												}					
												}
													while(exp>=500&&lv>40&&lv<=50){
																									lv+=1;
																									exp-=500;
																								wgp+=1+rand()%3*0.9;
																												hgp+=1+rand()%4*0.9;
																												sgp+=1+rand()%4*0.9;
																												cgp+=1+rand()%5*1.1;
																												hpg+=6+rand()%9;
																									fyp+=1;
																									lvdg+=1;
																									
																									if(exp<500){
																									cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
																								}
																								
																								}
					while(exp>=1000&&lv>50&&lv<=60){
																	lv+=1;
																	exp-=1000;
																	wgp+=1+rand()%3*0.9;
																					hgp+=1+rand()%4*0.9;
																					sgp+=1+rand()%4*0.9;
																					cgp+=1+rand()%5*1.1;
																					hpg+=6+rand()%9;
																	fyp+=1;
																	lvdg+=1;
																	
																	if(exp<1000){
																	cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
																}
															
																}
				while(exp>=2000&&lv>60&&lv<=70){
																lv+=1;
																exp-=2000;
															wgp+=1+rand()%3*0.9;
																			hgp+=1+rand()%4*0.9;
																			sgp+=1+rand()%4*0.9;
																			cgp+=1+rand()%5*1.1;
																			hpg+=6+rand()%9;
																fyp+=1;
																lvdg+=1;
																
																if(exp<2000){
																cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
															}
															}
				while(exp>=5000&&lv>70&&lv<=80){
																lv+=1;
																exp-=5000;
															wgp+=1+rand()%3*0.9;
																			hgp+=1+rand()%4*0.9;
																			sgp+=1+rand()%4*0.9;
																			cgp+=1+rand()%5*1.1;
																			hpg+=6+rand()%9;
																fyp+=1;
																lvdg+=1;
															
																if(exp<5000){
																cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
															}
															}
			while(exp>=10000&&lv>80&&lv<=90){
															lv+=1;
															exp-=10000;
														wgp+=1+rand()%3*0.9;
														hgp+=1+rand()%4*0.9;
														sgp+=1+rand()%4*0.9;
														cgp+=1+rand()%5*1.1;
														hpg+=6+rand()%9;expg=10000-exp;
															fyp+=1;
															lvdg+=1;
														
															if(exp<10000){
															cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
														}
														
														}
			while(exp>=20000&&lv>90&&lv<=100){
															lv+=1;
															exp-=20000;
															wgp+=1+rand()%3*0.9;
																			hgp+=1+rand()%4*0.9;
																			sgp+=1+rand()%4*0.9;
																			cgp+=1+rand()%5*1.1;
																			hpg+=6+rand()%9;
															fyp+=1;
															lvdg+=1;
															
															if(exp<20000){
															cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
														}
														
														}
														while(exp>=50000&&lv<=120){
																		lv+=1;
																		exp-=50000;
																		wgp+=1+rand()%3*0.9;
																		hgp+=1+rand()%4*0.9;
																		sgp+=1+rand()%4*0.9;
																		cgp+=1+rand()%5*1.1;
																		hpg+=6+rand()%9;
																		fyp+=1;
																		lvdg+=1;
																		
																		if(exp<50000){
																		cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
																	}
																	
																	}
																	while(exp>=100000&&lv<=150){
																					lv+=1;
																					exp-=100000;
																					wgp+=1+rand()%3*0.9;
																					hgp+=1+rand()%4*0.9;
																					sgp+=1+rand()%4*0.9;
																					cgp+=1+rand()%5*1.1;
																					hpg+=6+rand()%9;
																					fyp+=1;
																					lvdg+=1;
																					
																					if(exp<100000){
																					cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
																				}
																				
																				}
			while(exp>=200000&&lv<=200){
														lv+=1;
															exp-=200000;
															wgp+=1+rand()%3*0.9;
																				hgp+=1+rand()%4*0.9;
																				sgp+=1+rand()%4*0.9;
																				cgp+=1+rand()%5*1.1;
																				hpg+=6+rand()%9;
															fyp+=1;
															lvdg+=1;
														
															if(exp<200000){
															cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
														}
														}
			while(exp>=500000&&lv<=300){
							lv+=1;
							exp-=20;
							wgp+=1+rand()%3*0.9;
							hgp+=1+rand()%4*0.9;
							sgp+=1+rand()%4*0.9;
							cgp+=1+rand()%5*1.1;
							hpg+=6+rand()%9;
							fyp+=1;
							lvdg+=1;
							if(exp<500000)cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
						}	
			while(exp>=1000000&&lv>300){
					lv+=1;
					exp-=20;
			    	wgp+=1+rand()%3*0.9;
			    	hgp+=1+rand()%4*0.9;
			    	sgp+=1+rand()%4*0.9;
			    	cgp+=1+rand()%5*1.1;
					hpg+=6+rand()%9;
					fyp+=1;
					lvdg+=1;
					if(exp<1000000)cout<<"恭喜"<<zh<<"升到了"<<lv<<"级"<<endl;
				}	
			}
			qqdd();
																																																																																				
			}
			else if(cz=="2"){
				xxcs++;
				cout<<"名字："<<zh<<endl;
				cout<<"lv:"<<lv;
				cout<<"，距离下一级";
				if(lv<=10)cout<<20-exp;
				if(lv>10&&lv<=20)cout<<50-exp;
		        if(lv>20&&lv<=30)cout<<100-exp;
			    if(lv>30&&lv<=40)cout<<200-exp;
				if(lv>40&&lv<=50)cout<<500-exp;
				if(lv>50&&lv<=60)cout<<1000-exp;
				if(lv>60&&lv<=70)cout<<2000-exp;
				if(lv>70&&lv<=80)cout<<5000-exp;
                if(lv>80&&lv<=90)cout<<10000-exp;
				if(lv>90&&lv<=100)cout<<20000-exp;
				if(lv>100&&lv<=120)cout<<50000-exp;
				if(lv>120&&lv<=150)	cout<<100000-exp;
				if(lv>150&&lv<=200)	cout<<200000-exp;
                if(lv>200&&lv<=300)cout<<500000-exp;
                if(lv>300)cout<<1000000-exp;
				cout<<"点经验"<<endl;																																										
				cout<<"属性："<<sx<<endl;
				cout<<"攻击力："<<endl;
				cout<<"  体: 基础伤害："<<22+lv<<"  附加伤害："<<wgp-22-lv<<endl;
				cout<<"  火：基础伤害："<<26+lv<<"  元素伤害："<<hgp-26-lv<<endl;
				cout<<"  水：基础伤害："<<26+lv<<"  元素伤害："<<sgp-26-lv<<endl;
				cout<<"  草：基础伤害："<<26+lv<<"  元素伤害："<<cgp-26-lv<<endl;
				cout<<"防御力：本体防御："<<lv-1<<"  防具防御："<<fyp-lv+1<<endl;
				cout<<"生命值："<<hpg<<endl;
				cout<<"魔法值："<<mp<<"  回复："<<mps<<endl;
				cout<<"金币："<<jb<<endl;
				cout<<"通关："<<gq-1<<"关"<<endl;
				cout<<"无尽最高层数："<<wjcs<<endl;
				cout<<"活力值："<<hl<<"   "<<60-sj()+hlsj<<"s"<<endl;
				for(int i=0;i<(hl-4)*13/100;i++)if(i<13){cout<<"●";}
				else{cout<<"◎";}
				for(int i=(hl-4)*13/100;i<12;i++)cout<<"○";
				cout<<endl;
				cout<<"综合战力："<<hpg*10+(wgp+hgp+sgp+cgp)/4*50+fyp*50+bdnslv*lv/2+bdwmlv*lv/2+bdyslv*lv/2+bdsslv*lv/2+(tjnlv+hjnlv+sjnlv+cjnlv+qjnlv+hxjnlv)*50+mp*10+mps*50<<endl;
			    qqdd();
			}
			else if(cz=="3"){
				if(hl<0){
					cout<<"活力不足"<<endl;
				}
				else{
				string xm="2";
			if(xm=="2"){
	cout<<"请输入要强化的项目 (1 体术技能  2 火系技能  3 水系技能  4 草系技能  5 防御  6 生命值  7 mp)"<<endl;
				    	string xm2;
						cin>>xm2;
				    	if(xm2=="1"){
						    if(tqhs<1){
				    			cout<<"道具不足"<<endl;
				    		}else{
					    			wgp+=rand()%2+1;
					    			tqhs--;cout<<"强化成功！"<<endl;
					    	}
				    	}
			if(xm2=="2"){
			if(hqhs<1){
				cout<<"道具不足"<<endl;
				}else{
				hgp+=rand()%2+1;
				hqhs--;cout<<"强化成功！"<<endl;
					}
							}
							if(xm2=="3"){
										if(sqhs<1){
														cout<<"道具不足"<<endl;
														}else{
														sgp+=rand()%2+1;
														sqhs--;cout<<"强化成功！"<<endl;
															}
								}		
				if(xm2=="4"){
									if(cqhs<1){
													cout<<"道具不足"<<endl;
													}else{
													cgp+=rand()%2+1;
													cqhs--;cout<<"强化成功！"<<endl;
														}
									
								}
				if(xm2=="5"){
					string xm3;
					cout<<"（1 铁片  2 铜片  3 钢片）"<<endl;
					cin>>xm3;
					if(xm3=="1"){
						if(tiepian<1){
							cout<<"道具不足"<<endl;
						}
						else{
							tiepian--;
							fyp++;
							cout<<"强化成功！"<<endl;
						}
					}
					if(xm3=="2"){
											if(tongpian<1)cout<<"道具不足"<<endl;
											else{
												tongpian--;
												fyp+=2;
												cout<<"强化成功！"<<endl;
											}
										}
					if(xm3=="3"){
											if(gangpian<1){
												cout<<"道具不足"<<endl;
											}
											else{
												gangpian--;
												fyp+=3;
												cout<<"强化成功！"<<endl;
											}
										}				
								}
			if(xm2=="6"){
			if(smzy<1){
							cout<<"道具不足"<<endl;
							}else{
							hpg+=rand()%3+5;
							smzy--;cout<<"强化成功！"<<endl;
								}					
							}	
							if(xm2=="7"){
												string xm3;
												cout<<"（1 总量  2 回复）"<<endl;
												cin>>xm3;
												if(xm3=="1"){
													if(mqd<1){
														cout<<"道具不足"<<endl;
													}
													else{
														mqd--;
														mp+=rand()%4+4;
														cout<<"强化成功！"<<endl;
													}
												}
												if(xm3=="2"){
																		if(mhd<1)cout<<"道具不足"<<endl;
																		else{
																			mhd--;
																			mps+=1+rand()%2;
																			cout<<"强化成功！"<<endl;
																		}
																	}
															}		
			}
			}
			}
			else if(cz=="4"){
			
				if(lv<20){
					cout<<"等级不足"<<endl;
				}
				if(cs>=1){
						cout<<"只能转职1次"<<endl;
					}
				 if(lv>=20&&cs<1){
					cout<<"请选择要转（1 体  2 火  3 水  4 草）（注意，只能转属1次）"<<endl;
					string zz;
					cin>>zz;
					if(zz=="1"){
						sx="体";
						wgp+=100;
						cs++;
					}
					if(zz=="2"){
						sx="火";
						hgp+=120;
						cs++;
					}
					if (zz=="3"){
						sx="水";
						sgp+=120;
						cs++;
					}
					if(zz=="4"){
						sx="草";
						cgp+=135;
						cs++;
					}
					hpdg+=220;
					fyp+=15;
				}
				qqdd();
			}
		    else if(cz=="5"){
		    		if(hl<10){
									cout<<"活力不足"<<endl;
								}else{
	ld hp=hpg;
	
			hl-=10;
			ld hpd=rand()%200+40*gq,wgpd=rand()%25+5*gq,hgpd=rand()%30+6*gq,sgpd=rand()%35+7*gq,cgpd=rand()%33+6.6*gq,fypd=rand()%1+0.2*gq;
			cout<<"第"<<gq<<"关"<<endl;
			int jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"5",zh,hp,hpd,wgpd,hgpd,sgpd,cgpd,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,fypd);
			
			if(jg==0){cout<<"你失败了"<<endl;
			
			}
			else if(jg==1){
				int gqj=rand()%3+1;
			
				cout<<"你成功了！获得了"<<gqj<<"金币"<<endl;
							jb+=gqj;
							gq++;
			}
			}	
			qqdd();			
			}
		    else if(cz=="6"){
		    	wjpd=0;
		    	xwjcs=0;
			    for(int i=1;wjpd==0;i++){
			    	wjccs++;
					cout<<"第"<<i<<"层"<<endl;
	ld	hp=hpg;
			
			
			ld hpd=160+rand()%20*i+20*i,wgpd=rand()%50+9*i,hgpd=rand()%60+11*i,sgpd=rand()%70+12*i,cgpd=rand()%66+11.6*i,fypd=rand()%2+0.1*i;
			int jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"6",zh,hp,hpd,wgpd,hgpd,sgpd,cgpd,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,fypd);
			
			if(jg==0){
			
				cout<<"你失败了"<<endl;
				qqdd();
				wjpd=1;
			}else if(jg==1){
					cout<<"你成功了！进入下一层"<<endl;
					wjpd=0;
					
					xwjcs++;
					if(xwjcs>wjcs){
						zhmf+=xwjcs-wjcs;
						cout<<"获得时间转换卡_s->min*"<<xwjcs-wjcs<<endl;
						wjcs=xwjcs;
					}
			}else if(jg==-1){goto zy;}					
				}
			}
	        else if(cz=="7"){
				cout<<"请输入你要改的名字"<<endl;
				cin>>zh;
				while((int)zh.length()>10){
								if((int)zh.length()>10)cout<<"名字长度过长！请输入不超过10个字符（1汉字=2字符）"<<endl;
								cin>>zh;
							}
				cout<<"修改成功！"<<endl;
				gmcs++;
				if(zh=="nahida")hl+=127;
				}
			else if(cz=="8"){string cz8="1";
				cout<<"游戏名称：game"<<endl;
				while(cz8!="0"){
					gzcs++;
				cout<<"（1 等级  2 活力  3 金币  4 属性  5 强化  0 退出)"<<endl;
				cin>>cz8;
				if(cz8=="1")cout<<"等级通过锻炼提升，提升等级能让你变得更强大。"<<endl;
				if(cz8=="2")cout<<"锻炼和通关都需要活力，活力通过活力瓶或随时间提升。"<<endl;
				if(cz8=="3")cout<<"金币通过关卡获得，金币可用来压制。"<<endl;
				if(cz8=="4")cout<<"转职可切换属性，20级后可转职，转职后此属性可得到大幅提升。"<<endl;
				if(cz8=="5")cout<<"可用道具强化属性。"<<endl;
				}
			}
			else if(cz=="9"){
				bbcs++;
				string cz91="1";
				cout<<"背包"<<endl;
				if(tqhsp>0)cout<<"体强化碎片："<<tqhsp<<endl;
				if(hqhsp>0)cout<<"火强化碎片："<<hqhsp<<endl;
				if(sqhsp>0)cout<<"水强化碎片："<<sqhsp<<endl;
				if(cqhsp>0)cout<<"草强化碎片："<<cqhsp<<endl;
				if(tqhs>0)cout<<"体强化石："<<tqhs<<endl;
				if(hqhs>0)cout<<"火强化石："<<hqhs<<endl;
				if(sqhs>0)cout<<"水强化石："<<sqhs<<endl;
				if(cqhs>0)cout<<"草强化石："<<cqhs<<endl;
				if(xhlp>0)cout<<"小活力瓶："<<xhlp<<endl;
				if(dhlp>0)cout<<"大活力瓶："<<dhlp<<endl;
				if(tieli>0)cout<<"铁粒："<<tieli<<endl;
				if(tongli>0)cout<<"铜粒："<<tongli<<endl;
				if(gangli>0)cout<<"钢粒："<<gangli<<endl;
				if(tieding>0)cout<<"铁锭："<<tieding<<endl;
				if(tongding>0)cout<<"铜锭："<<tongding<<endl;
				if(gangding>0)cout<<"钢锭："<<gangding<<endl;
				if(tiepian>0)cout<<"铁片："<<tiepian<<endl;
				if(tongpian>0)cout<<"铜片："<<tongpian<<endl;
				if(gangpian>0)cout<<"钢片："<<gangpian<<endl;
				if(smzy>0)cout<<"生命之源："<<smzy<<endl;
				if(bdjhsp>0)cout<<"被动突破碎片:"<<bdjhsp<<endl;
				if(bdjhs>0)cout<<"被动突破石："<<bdjhs<<endl;
				if(bdsjs>0)cout<<"被动升级石:"<<bdsjs<<endl;
				if(jnsjs>0)cout<<"技能升级石:"<<jnsjs<<endl;
				if(jntpsp>0)cout<<"技能突破碎片:"<<jntpsp<<endl;
				if(jntps>0)cout<<"技能突破石:"<<jntps<<endl;
				if(mqd>0)cout<<"魔泉丹:"<<mqd<<endl;
				if(mhd>0)cout<<"魔回丹:"<<mhd<<endl;
				if(cjj>0)cout<<"抽奖券:"<<cjj<<endl;
				if(zhhm>0)cout<<"时间转化卡_ms->s:"<<zhhm<<endl;
				if(zhmh>0)cout<<"时间转化卡_s->ms:"<<zhmh<<endl;
				if(zhmf>0)cout<<"时间转化卡_s->min:"<<zhmf<<endl;
				if(zhfm>0)cout<<"时间转化卡_min->s:"<<zhfm<<endl;
				if(zhfx>0)cout<<"时间转化卡_min->h:"<<zhfx<<endl;
				if(zhxf>0)cout<<"时间转化卡_h->min:"<<zhxf<<endl;
				if(zhxt>0)cout<<"时间转化卡_h->day:"<<zhxt<<endl;
				if(sjtzq>0)cout<<"时间挑战券："<<sjtzq<<endl;
				if(sjsh>0)cout<<"时间货币："<<sjsh<<endl;
				cout<<"金币："<<jb<<endl;
				if(yxfs>0)cout<<"游戏分数："<<yxfs<<endl;
				if(gjb>0)cout<<"挂机币："<<gjb<<endl;
				cout<<endl;
				cout<<"---------已经到底啦！---------"<<endl;
				while(cz91!="0"){
				cout<<"（1 使用  2 合成  3 压制  0 返回）"<<endl;
				if(yxcs>=1&&yxcs<=2&&xsyd1==1&&xsyd)cout<<"系统：其实你的背包里并没有什么东西（doge）"<<"请按下0并Enter返回"<<endl;
				cin>>cz91;
				if(cz91=="1"){
					string cz92;
					cout<<"（1 小活力瓶  2 大活力瓶）"<<endl;
					cin>>cz92;
					if(cz92=="1"){
						if(xhlp>0){
						hl+=10;
						cout<<"使用成功！"<<endl;
					   xhlp--;
					   }
					   else{
					   	cout<<"道具不足！"<<endl;
					   }
					}
						if(cz92=="2"){
											if(dhlp>0){
											hl+=30;
											cout<<"使用成功！"<<endl;
										   dhlp--;
										   }
										   else{
										   	cout<<"道具不足！"<<endl;
										   }
										}
				}
				if(cz91=="2"){
					string cz93;
					cout<<"（1 体强化碎片  2 火强化碎片  3 水强化碎片  4 草强化碎片  5 铁粒  6 铜粒  7 钢粒  8 被动突破石  9 技能突破石）"<<endl;
					cin>>cz93;
					if(cz93=="1"){
						if(tqhsp>=9){
						    tqhs++;
							cout<<"合成成功！"<<endl;
							tqhsp-=9;
						}
						else{
								cout<<"道具不足！"<<endl;
							 }
				}
				if(cz93=="2"){
										if(hqhsp>=9){
										    hqhs++;
											cout<<"合成成功！"<<endl;
											hqhsp-=9;
										}
										else{
												cout<<"道具不足！"<<endl;
											 }
								}
			if(cz93=="3"){
									if(sqhsp>=9){
									    sqhs++;
										cout<<"合成成功！"<<endl;
										sqhsp-=9;
									}
									else{
											cout<<"道具不足！"<<endl;
										 }
							}
		    if(cz93=="4"){
												if(cqhsp>=9){
												    cqhs++;
													cout<<"合成成功！"<<endl;
													cqhsp-=9;
												}
												else{
														cout<<"道具不足！"<<endl;
													 }
										}
			if(cz93=="5"){
				if(tieli>=9){
				   tieding++;
			    	cout<<"合成成功！"<<endl;
					tieli-=9;
					}
					else{
						cout<<"道具不足！"<<endl;
						 }
			}
			if(cz93=="6"){
							if(tongli>=9){
							   tongding++;
						    	cout<<"合成成功！"<<endl;
								tongli-=9;
								}
								else{
									cout<<"道具不足！"<<endl;
									 }
						}
			if(cz93=="7"){
							if(gangli>=9){
							   gangding++;
						    	cout<<"合成成功！"<<endl;
								gangli-=9;
								}
								else{
									cout<<"道具不足！"<<endl;
									 }
						}
							if(cz93=="8"){
																if(bdjhsp>=9){
																    bdjhs++;
																	cout<<"合成成功！"<<endl;
																	bdjhsp-=9;
																}
																else{
																		cout<<"道具不足！"<<endl;
																	 }
														}
			    if(cz93=="9"){
										if(jntpsp>=9){
										    jntps++;
											cout<<"合成成功！"<<endl;
										    jntpsp-=9;
										}
										else{
												cout<<"道具不足！"<<endl;
											 }
			}
			}
			if(cz91=="3"){
				string cz94;
				cout<<"（1 铁锭  2 铜锭  3 钢锭）"<<endl;
				cin>>cz94;
				if(cz94=="1"){
					if(tieding>0&&jb>0){
						tieding--;
						jb--;
						tiepian++;
						cout<<"压制成功！"<<endl;
					}
					else{
						cout<<"道具或金币不足！"<<endl;
					}
				}
				if(cz94=="2"){
									if(tongding>0&&jb>0){
										tongding--;
										jb--;
										tongpian++;
										cout<<"压制成功！"<<endl;
									}
									else{
										cout<<"道具或金币不足！"<<endl;
									}
								}
			   if(cz94=="3"){
			   					if(gangding>0&&jb>0){
			   						gangding--;
			   						jb--;
			   						gangpian++;
			   						cout<<"压制成功！"<<endl;
			   					}
			   					else{
			   						cout<<"道具或金币不足！"<<endl;
			   					}
			   				}
			}
			
			}
			}
			else if(cz=="a"){
				cout<<"宁死不屈"<<endl;
				if(bdnslv%20==0)cout<<"需突破！"<<endl;
				cout<<"lv:"<<bdnslv<<endl;
				cout<<"在生命值低于"<<bdnshpg<<"时增加"<<bdnsgpg<<"%伤害"<<endl;
				cout<<endl;
				cout<<"无名之怒"<<endl;
				if(bdwmlv%20==0)cout<<"需突破！"<<endl;
				cout<<"lv:"<<bdwmlv<<endl;
				cout<<"有"<<bdwmglg*0.5<<"%的概率增加"<<bdwmgpg<<"%伤害"<<endl;
				cout<<endl;
				cout<<"身手敏捷"<<endl;
				if(bdsslv%20==0)cout<<"需突破！"<<endl;
			    cout<<"lv:"<<bdsslv<<endl;
				cout<<"有"<<bdssglg*0.1<<"%的概率闪避"<<endl;
				cout<<endl;
				cout<<"一身反骨"<<endl;
				if(bdyslv%20==0)cout<<"需突破！"<<endl;
				cout<<"lv:"<<bdyslv<<endl;
				cout<<"在受到伤害时有"<<bdysglg*0.5<<"%的概率反伤"<<bdysgpg<<"%"<<endl;
				string cza;
				
				cout<<"（1 升级  0 返回）"<<endl;
				cin>>cza;
				
					if(cza=="1"){
						cout<<"（1 宁死不屈  2 无名之怒  3 身手敏捷  4 一身反骨  0 返回）"<<endl;
						string cza1;
						cin>>cza1;
						if(cza1=="1"){
							if(bdnslv<lv){
								if(bdnslv%20!=0&&bdsjs>=1){
								bdnslv++;
								bdsjs--;
								if(bdnslv%3==0){bdnsgpg+=2;}
								else{bdnshpg+=5;}
								cout<<"强化成功！"<<endl;
							}
							else if(bdnslv%20==0&&bdjhs>=1){
								bdnslv++;
								bdjhs--;//TODO
								if(bdnslv%3==0){bdnsgpg+=2;}
																else{bdnshpg+=5;}
																cout<<"突破成功！"<<endl;
							}
							
							else{cout<<"道具不足！"<<endl;}}
							else{cout<<"被动等级不能大于玩家等级！"<<endl;}
						}
						
				else if(cza1=="2"){
				if(bdwmlv<lv){
											if(bdwmlv%20!=0&&bdsjs>=1){
											bdwmlv++;
											bdsjs--;
											if(bdwmlv%3==0){bdwmgpg+=1;}
											else{bdwmglg+=1;}
											cout<<"强化成功！"<<endl;
										}
										else if(bdwmlv%20==0&&bdjhs>=1){
											bdwmlv++;
											bdjhs--;//TODO
											if(bdwmlv%3==0){bdwmgpg+=2;}
																			else{bdwmglg+=2;}
																			cout<<"突破成功！"<<endl;
										}
										
										else{cout<<"道具不足！"<<endl;}}
										else{cout<<"被动等级不能大于玩家等级！"<<endl;}
										}
										else if(cza1=="3"){
																	if(bdsslv<lv){
																		if(bdsslv%20!=0&&bdsjs>=1){
																		bdsslv++;
																		bdsjs--;
																	bdssglg++;
																		cout<<"强化成功！"<<endl;
																	}
																	else if(bdsslv%20==0&&bdjhs>=1){
																		bdsslv++;
																		bdjhs--;//TODO
																	bdssglg+=2;
																		cout<<"突破成功！"<<endl;
																	}
																	
																	else{cout<<"道具不足！"<<endl;}}
																	else{cout<<"被动等级不能大于玩家等级！"<<endl;}
																}
																	else if(cza1=="4"){
																		
																				if(bdyslv<lv){
																											if(bdyslv%20!=0&&bdsjs>=1){
																											bdyslv++;
																											bdsjs--;
																											if(bdyslv%3==0){bdysgpg+=1;}
																						else{bdysglg+=1;}
																											cout<<"强化成功！"<<endl;
																										}
																										else if(bdyslv%20==0&&bdjhs>=1){
																											bdyslv++;
																											bdjhs--;//TODO
																											if(bdyslv%3==0){bdysgpg+=2;}
																																			else{bdysglg+=2;}
																																			cout<<"突破成功！"<<endl;
																										}
																										
																										else{cout<<"道具不足！"<<endl;}}
																										else{cout<<"被动等级不能大于玩家等级！"<<endl;}
																										}		
						else if(cza1=="0"){goto zy;}
						else{cza=="0";}
					}
			}
			else if(cz=="b"){
				if(lv<75){cout<<"等级不足！"<<endl,qqdd();goto zy;}
				if(jb<3){cout<<"金币不足！"<<endl,qqdd();goto zy;}
				jb-=3;
				string czb1;
				cout<<"(1 世界BOSS  2 元素BOSS  3 时间BOSS）"<<endl;
				cin>>czb1;//
				if(czb1=="1"){
					string czb11;
					cout<<"(1 乌合之众  2 太阳帝国  3 战争起源  4 铁塔尚在  5 日不落的余辉  6 凌冬将至  7 怒海狂涛)"<<endl;
					cin>>czb11;//
					if(czb11=="1"){
					
				            bosscs++;
							cout<<"BOSS1：乌合之众"<<endl;
							cout<<"适宜等级：100"<<endl;
							cout<<"hp:3200"<<endl;
							int hp=hpg;
							
							int jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp11",zh,hp,3200,290,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,240);
							
							if(jg==0){
								cout<<"你失败了！"<<endl;
								qqdd();
								b11b++;
							}
							if(jg==1){
								b11++;
							sjjl=rand()%9+1;
							cout<<"时间+"<<sjjl<<"ms!"<<endl;
							mse+=sjjl;
		                    cout<<"BOSS1：乌合之众[第二形态]"<<endl;
							cout<<"适宜等级：120"<<endl;
							cout<<"hp:4000"<<endl;
							 hp=hpg;
							 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp12",zh,hp,4000,350,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,300);
							if(jg==0){
								cout<<"你失败了！"<<endl;
								qqdd();
								b12b++;
							}
							if(jg==1){
								b12++;
								sjjl=rand()%13+1;
								cout<<"时间+"<<sjjl<<"ms!"<<endl;
								mse+=sjjl;		
							
							cout<<"BOSS1：乌合之众[第三形态](毒)"<<endl;
														cout<<"适宜等级：150"<<endl;
														cout<<"hp:5000"<<endl;
														 hp=hpg;
														 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bd13",zh,hp,5000,80,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,360);
														if(jg==0){
															cout<<"你失败了！"<<endl;
															qqdd();
															b13b++;
														}
														if(jg==1){
															cout<<"你成功了！"<<endl;
															qqdd();
															b13++;
															sjjl=rand()%13+1;
															cout<<"时间+"<<sjjl<<"ms!"<<endl;
															mse+=sjjl;
															if(b13==1){
																cout<<"恭喜你打败乌合之众!"<<endl;
																qqdd();
																cout<<"乌合之众的原型是INDIA，是第一个世界BOSS,"<<zh<<"共用了"<<b11b+b12b+b13b<<"次通关，恭喜！"<<endl;
																qqdd();
																cout<<zh<<"获得了时间转化卡_ms->s*1!"<<endl;
																zhhm++;
																qqdd();
															}
														}
							}
							}
			}else if(czb11=="2"){
				bosscs++;
											cout<<"BOSS2：太阳帝国(毒)"<<endl;
											cout<<"适宜等级：120"<<endl;
											cout<<"hp:4000"<<endl;
											int hp=hpg;
											
											int jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bd21",zh,hp,4000,64,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,300);
											
											if(jg==0){
												cout<<"你失败了！"<<endl;
												qqdd();
												b21b++;
											}
											if(jg==1){
												b21++;
											sjjl=rand()%13+1;
											cout<<"时间+"<<sjjl<<"ms!"<<endl;
											mse+=sjjl;
						                    cout<<"BOSS2：太阳帝国[第二形态](毒)"<<endl;
											cout<<"适宜等级：150"<<endl;
											cout<<"hp:5000"<<endl;
											 hp=hpg;
											 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bd22",zh,hp,5000,80,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,360);
											if(jg==0){
												cout<<"你失败了！"<<endl;
												qqdd();
												b22b++;
											}
											if(jg==1){
												b22++;
												sjjl=rand()%19+1;
												cout<<"时间+"<<sjjl<<"ms!"<<endl;
												mse+=sjjl;			
											
											cout<<"BOSS2：太阳帝国[第三形态](毒)"<<endl;
																		cout<<"适宜等级：180"<<endl;
																		cout<<"hp:6000"<<endl;
																		 hp=hpg;
																		 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bd23",zh,hp,6000,96,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,420);
																		if(jg==0){
																			cout<<"你失败了！"<<endl;
																			qqdd();
																			b23b++;
																		}
																		if(jg==1){
																			cout<<"你成功了！"<<endl;
																			qqdd();
																			b23++;
																			sjjl=rand()%19+1;
																			cout<<"时间+"<<sjjl<<"ms!"<<endl;
																			mse+=sjjl;
																			
																				cout<<"恭喜你打败太阳帝国!"<<endl;
																				qqdd();
																				cout<<"太阳帝国的原型是JAPAN，是第二个世界BOSS,"<<zh<<"共用了"<<b21b+b22b+b23b<<"次通关，恭喜！"<<endl;
																				qqdd();
																				cout<<zh<<"获得了时间转化卡_ms->s*2!"<<endl;
																				zhhm+=2;
																				qqdd();
																			
																		}
											}
											}
			}
			if(czb11=="3"){
								
							            bosscs++;
										cout<<"BOSS3：战争起源"<<endl;
										cout<<"适宜等级：150"<<endl;
										cout<<"hp:5000"<<endl;
										int hp=hpg;
										
										int jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp31",zh,hp,5000,440,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,360);
										
										if(jg==0){
											cout<<"你失败了！"<<endl;
											qqdd();
											b31b++;
										}
										if(jg==1){
											b31++;
										sjjl=rand()%21+1;
										cout<<"时间+"<<sjjl<<"ms!"<<endl;
										mse+=sjjl;
					                    cout<<"BOSS3：战争起源[第二形态]"<<endl;
										cout<<"适宜等级：170"<<endl;
										cout<<"hp:5600"<<endl;
										 hp=hpg;
										 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp32",zh,hp,5600,500,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,400);
										if(jg==0){
											cout<<"你失败了！"<<endl;
											qqdd();
											b32b++;
										}
										if(jg==1){
											b32++;
											sjjl=rand()%27+1;
											cout<<"时间+"<<sjjl<<"ms!"<<endl;
											mse+=sjjl;			
										
										cout<<"BOSS3：战争起源[第三形态]"<<endl;
																	cout<<"适宜等级：200"<<endl;
																	cout<<"hp:6250"<<endl;
																	 hp=hpg;
																	 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp33",zh,hp,6250,570,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,480);
																	if(jg==0){
																		cout<<"你失败了！"<<endl;
																		qqdd();
																		b33b++;
																	}
																	if(jg==1){
																		cout<<"你成功了！"<<endl;
																		qqdd();
																		b33++;
																		sjjl=rand()%27+1;
																		cout<<"时间+"<<sjjl<<"ms!"<<endl;
																		mse+=sjjl;
																		if(b33==1){
																			cout<<"恭喜你打败战争起源!"<<endl;
																			qqdd();
																			cout<<"战争起源的原型是GERMEN，是第三个世界BOSS,"<<zh<<"共用了"<<b31b+b32b+b33b<<"次通关，恭喜！"<<endl;
																			qqdd();
																			cout<<zh<<"获得了时间转化卡_ms->s*6!"<<endl;
																			zhhm+=6;
																			qqdd();
																		}
																	}
										}
										}
						}if(czb11=="4"){
											
										            bosscs++;
													cout<<"BOSS4：铁塔尚在"<<endl;
													cout<<"适宜等级：170"<<endl;
													cout<<"hp:5600"<<endl;
													int hp=hpg;
													
													int jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp41",zh,hp,5600,500,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,240);
													
													if(jg==0){
														cout<<"你失败了！"<<endl;
														qqdd();
														b41b++;
													}
													if(jg==1){
														b41++;
													sjjl=rand()%27+1;
													cout<<"时间+"<<sjjl<<"ms!"<<endl;
													mse+=sjjl;
								                    cout<<"BOSS4：铁塔尚在[第二形态]"<<endl;
													cout<<"适宜等级：200"<<endl;
													cout<<"hp:6250"<<endl;
													 hp=hpg;
													 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp42",zh,hp,6250,350,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,300);
													if(jg==0){
														cout<<"你失败了！"<<endl;
														qqdd();
														b42b++;
													}
													if(jg==1){
														b42++;
														sjjl=rand()%39+1;
														cout<<"时间+"<<sjjl<<"ms!"<<endl;
														mse+=sjjl;				
													
													cout<<"BOSS4：铁塔尚在[第三形态](毒)"<<endl;
																				cout<<"适宜等级：250"<<endl;
																				cout<<"hp:10000"<<endl;
																				 hp=hpg;
																				 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp43",zh,hp,10000,400,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,360);
																				if(jg==0){
																					cout<<"你失败了！"<<endl;
																					qqdd();
																					b43b++;
																				}
																				if(jg==1){
																					cout<<"他投降了！"<<endl;
																					qqdd();
																					b43++;
																					sjjl=rand()%39+1;
																					cout<<"时间+"<<sjjl<<"ms!"<<endl;
																					mse+=sjjl;
																					if(b43==1){
																						cout<<"恭喜你打败铁塔尚在!"<<endl;
																						qqdd();
																						cout<<"铁塔尚在的原型是FRANCH，是第四个世界BOSS,"<<zh<<"共用了"<<b41b+b42b+b43b<<"次通关，恭喜！"<<endl;
																						qqdd();
																						cout<<zh<<"获得了时间转化卡_ms->s*10!"<<endl;
																						zhhm+=10;
																						qqdd();
																					}
																				}
													}
													}
									}
					if(czb11=="5"){
										
									            bosscs++;
												cout<<"BOSS5:日不落的余辉"<<endl;
												cout<<"适宜等级：200"<<endl;
												cout<<"hp:6250"<<endl;
												int hp=hpg;
												int jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp51",zh,hp,6250,350,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,300);
												if(jg==0){
													cout<<"你失败了！"<<endl;
													qqdd();
													b51b++;
												}
												if(jg==1){
													b51++;
												sjjl=rand()%39+1;
												cout<<"时间+"<<sjjl<<"ms!"<<endl;
												mse+=sjjl;
							                    cout<<"BOSS5：日不落的余辉[第二形态]"<<endl;
												cout<<"适宜等级：250"<<endl;
												cout<<"hp:7500"<<endl;
												 hp=hpg;
												 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp52",zh,hp,7500,420,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,360);
												if(jg==0){
													cout<<"你失败了！"<<endl;
													qqdd();
													b52b++;
												}
												if(jg==1){
													b52++;
													sjjl=rand()%52+1;
													cout<<"时间+"<<sjjl<<"ms!"<<endl;
													mse+=sjjl;			
												
												cout<<"BOSS5：日不落的余辉[第三形态]"<<endl;
																			cout<<"适宜等级：300"<<endl;
																			cout<<"hp:8750"<<endl;
																			 hp=hpg;
																			 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bP53",zh,hp,8750,490,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,420);
																			if(jg==0){
																				cout<<"你失败了！"<<endl;
																				qqdd();
																				b53b++;
																			}
																			if(jg==1){
																				cout<<"你成功了！"<<endl;
																				qqdd();
																				b53++;
																				sjjl=rand()%52+1;
																				cout<<"时间+"<<sjjl<<"ms!"<<endl;
																				mse+=sjjl;
																				if(b53==1){
																					cout<<"恭喜你打败日不落的余辉!"<<endl;
																					qqdd();
																					cout<<"日不落的余辉的原型是ENGLAND，是第五个世界BOSS,"<<zh<<"共用了"<<b51b+b52b+b53b<<"次通关，恭喜！"<<endl;
																					qqdd();
																					cout<<zh<<"获得了时间转化卡_ms->s*19!"<<endl;
																					zhhm+=19;
																					qqdd();
																				}
																			}
												}
												}
								}
				if(czb11=="6"){
									
					  bosscs++;
						cout<<"BOSS6：凌冬将至"<<endl;
						cout<<"适宜等级：250"<<endl;
						cout<<"hp:7500"<<endl;
						int hp=hpg;
						int jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp61",zh,hp,7500,420,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,360);
						if(jg==0){
					    	cout<<"你失败了！"<<endl;
					    	qqdd();
							b61b++;
						}
						if(jg==1){
							b61++;
				    		sjjl=rand()%52+1;
							cout<<"时间+"<<sjjl<<"ms!"<<endl;
							mse+=sjjl;
						    cout<<"BOSS6：凌冬将至[第二形态]"<<endl;
							cout<<"适宜等级：300"<<endl;
							cout<<"hp:8750"<<endl;
											 hp=hpg;
											 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp62",zh,hp,8750,490,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,420);
											if(jg==0){
												cout<<"你失败了！"<<endl;
												qqdd();
												b62b++;
											}
											if(jg==1){
												b62++;
												sjjl=rand()%69+1;
												cout<<"时间+"<<sjjl<<"ms!"<<endl;
												mse+=sjjl;				
											
											cout<<"BOSS6：凌冬将至[第三形态]"<<endl;
												cout<<"适宜等级：350"<<endl;
												cout<<"hp:10000"<<endl;
												 hp=hpg;
												 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp63",zh,hp,10000,560,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,480);
												if(jg==0){
												cout<<"你失败了！"<<endl;
												qqdd();
												b63b++;
											}
												if(jg==1){
			
											b63++;
										sjjl=rand()%99+1;
										cout<<"时间+"<<sjjl<<"ms!"<<endl;
										mse+=sjjl;
														cout<<"BOSS6：凌冬将至[第四形态]"<<endl;
																cout<<"适宜等级：400"<<endl;
																cout<<"hp:19000"<<endl;
													 hp=hpg;
																	 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp64",zh,hp,19000,480,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,520);
																	if(jg==0){
																	cout<<"你失败了！"<<endl;
																		qqdd();
																b64b++;
																}
															if(jg==1){
															b64++;
															sjjl=rand()%127+1;
															cout<<"时间+"<<sjjl<<"ms!"<<endl;
															mse+=sjjl;			
						
															cout<<"BOSS6：凌冬将至[第五形态]"<<endl;
														cout<<"适宜等级：500"<<endl;
															cout<<"hp:10000"<<endl;
															 hp=hpg;
																 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,2,"bp65",zh,hp,10000,560,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,480);
																if(jg==0){
																cout<<"你失败了！"<<endl;
																	qqdd();
																b65b++;
																}
															if(jg==1){					
																cout<<"你成功了！"<<endl;
									    						qqdd();
																b65++;
																sjjl=rand()%127+1;
																cout<<"时间+"<<sjjl<<"ms!"<<endl;
																mse+=sjjl;
																	if(b65==1){
																		cout<<"恭喜你打败凌冬将至!"<<endl;
																		qqdd();
																		cout<<"凌冬将至的原型是RASS，是第六个世界BOSS,"<<zh<<"共用了"<<b61b+b62b+b63b+b64b+b65b<<"次通关，恭喜！"<<endl;
																							
																		qqdd();
															    		cout<<zh<<"获得了时间转化卡_ms->s*27!"<<endl;
																		zhhm+=27;
																		qqdd();
																		}
																	}
																}
											}
											}
							}
			}
			if(czb11=="7"){
												
								  bosscs++;
									cout<<"BOSS7：怒海狂涛"<<endl;
									cout<<"适宜等级：300"<<endl;
									cout<<"hp:8750"<<endl;
									int hp=hpg;
									int jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp71",zh,hp,8750,490,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,420);
									if(jg==0){
								    	cout<<"你失败了！"<<endl;
								    	qqdd();
										b71b++;
									}
									if(jg==1){
										b71++;
							    		sjjl=rand()%99+1;
										cout<<"时间+"<<sjjl<<"ms!"<<endl;
										mse+=sjjl;
									    cout<<"BOSS7：怒海狂涛[第二形态]"<<endl;
										cout<<"适宜等级：350"<<endl;
										cout<<"hp:10000"<<endl;
														 hp=hpg;
														 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp72",zh,hp,10000,560,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,480);
														if(jg==0){
															cout<<"你失败了！"<<endl;
															qqdd();
															b62b++;
														}
														if(jg==1){
															b72++;
															sjjl=rand()%127+1;
															cout<<"时间+"<<sjjl<<"ms!"<<endl;
															mse+=sjjl;				
														
														cout<<"BOSS7：怒海狂涛[第三形态]"<<endl;
															cout<<"适宜等级：400"<<endl;
															cout<<"hp:11250"<<endl;
															 hp=hpg;
															 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp73",zh,hp,11250,630,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,540);
															if(jg==0){
															cout<<"你失败了！"<<endl;
															qqdd();
															b73b++;
														}
															if(jg==1){
						
														b73++;
													sjjl=rand()%227+1;
													cout<<"时间+"<<sjjl<<"ms!"<<endl;
													mse+=sjjl;
																	cout<<"BOSS7：怒海狂涛[第四形态]"<<endl;
																			cout<<"适宜等级：500"<<endl;
																			cout<<"hp:13750"<<endl;
																 hp=hpg;
																				 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp74",zh,hp,13750,770,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,660);
																				if(jg==0){
																				cout<<"你失败了！"<<endl;
																					qqdd();
																			b74b++;
																			}
																		if(jg==1){
																		b74++;
																		sjjl=rand()%399+1;
																		cout<<"时间+"<<sjjl<<"ms!"<<endl;
																		mse+=sjjl;				
									
																		cout<<"BOSS7：怒海狂涛[第五形态]"<<endl;
																	cout<<"适宜等级：550"<<endl;
																		cout<<"hp:15000"<<endl;
																		 hp=hpg;
																			 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp75",zh,hp,15000,840,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,720);
																			if(jg==0){
																			cout<<"你失败了！"<<endl;
																				qqdd();
																			b75b++;
																			}
																		if(jg==1){					
																			cout<<"你成功了！"<<endl;
												    						qqdd();
																			b75++;
																			sjjl=rand()%520+1;
																			cout<<"时间+"<<sjjl<<"ms!"<<endl;
																			mse+=sjjl;
																				
																												    		
																														    cout<<"BOSS7：怒海狂涛[第六形态]"<<endl;
																															cout<<"适宜等级：650"<<endl;
																															cout<<"hp:17500"<<endl;
																																			 hp=hpg;
																																			 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bp76",zh,hp,17500,980,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,840);
																																			if(jg==0){
																																				cout<<"你失败了！"<<endl;
																																				qqdd();
																																				b76b++;
																																			}
																																			if(jg==1){
																																				b76++;
																																				sjjl=rand()%1027+1;
																																				cout<<"时间+"<<sjjl<<"ms!"<<endl;
																																				mse+=sjjl;				
																																			
																																			cout<<"BOSS7：怒海狂涛[第七形态](毒)"<<endl;
																																				cout<<"适宜等级：650"<<endl;
																																				cout<<"hp:17500"<<endl;
																																				 hp=hpg;
																																				 jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bd77",zh,hp,17500,280,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,840);
																																				if(jg==0){
																																				cout<<"你失败了！"<<endl;
																																				qqdd();
																																				b77b++;
																																			}
																																				if(jg==1){
																																					b77++;
																																					sjjl=rand()%1027+1;
																																					cout<<"时间+"<<sjjl<<"ms!"<<endl;
																																					mse+=sjjl;
																																					cout<<"恭喜你打败怒海狂涛!"<<endl;
																																				qqdd();
																																	cout<<"怒海狂涛的原型是AMA，是第七个世界BOSS,"<<zh<<"共用了"<<b71b+b72b+b73b+b74b+b75b+b76b+b77b<<"次通关，恭喜！"<<endl;
																																				
																																			qqdd();
																																			cout<<zh<<"获得了时间转化卡_ms->s*39!"<<endl;
																																					zhhm+=39;
																																			qqdd();
																	}
																}
															}
														}
													}
												}
										}
						}
			}
			else if(czb1=="2"){
				string czb21;
				cout<<"(1 体术BOSS  2 火系BOSS  3 水系BOSS  4 草系BOSS)"<<endl;
				cin>>czb21;
				if(czb21=="1"){
					int hp=hpg;
				
				int	jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bt",zh,hp,17500,960,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,840);
					if(jg==1){
						cout<<"你成功了！"<<endl;
						qqdd();
						cout<<zh<<"获得了时间转化卡_s->min*4!"<<endl;
						qqdd();
						zhmf+=4;
						tqhsp+=4;
					}else{
						cout<<"你失败了！"<<endl;
						qqdd();
					}
				}
				else if(czb21=="2"){
					int hp=hpg;
									
									int	jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bh",zh,hp,20000,0,1100,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,860);
										if(jg==1){
											cout<<"你成功了！"<<endl;
											qqdd();
											cout<<zh<<"获得了时间转化卡_s->min*9!"<<endl;
											qqdd();
											zhmf+=9;
											hqhsp+=4;
										}else{
											cout<<"你失败了！"<<endl;
											qqdd();
										}
				}
				else if(czb21=="3"){
					int hp=hpg;
									
									int	jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bs",zh,hp,20000,0,0,1100,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,860);
										if(jg==1){
											cout<<"你成功了！"<<endl;
											qqdd();
											cout<<zh<<"获得了时间转化卡_s->min*9!"<<endl;
											qqdd();
											zhmf+=9;
											sqhsp+=4;
										}else{
											cout<<"你失败了！"<<endl;
											qqdd();
										}
				}else if(czb21=="4"){
					int hp=hpg;
									
									int	jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"bc",zh,hp,20000,220,0,0,220,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,860);
										if(jg==1){
											cout<<"你成功了！"<<endl;
											qqdd();
											cout<<zh<<"获得了时间转化卡_s->min*9!"<<endl;
											qqdd();
											zhmf+=9;
											cqhsp+=4;
										}else{
											cout<<"你失败了！"<<endl;
											qqdd();
										}
				}
			}
			else if(czb1=="3"){
				cout<<"（1 时间小兵  2 时间BOSS）"<<endl;
				string czb13;
				cin>>czb13;
				if(czb13=="1"){
				int	hp=hpg;
					int	jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,5,"xj",zh,hp,5000,1000,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,860);
			    if(jg==1)cout<<"你成功了！"<<endl,qqdd();
			    else cout<<"你失败了！"<<endl,qqdd();
			}
			else if(czb13=="2"){
				if(sjtzq<=0){
					cout<<"挑战券不足！"<<endl;
					qqdd();
				}
				else{
					sjtzq--;
					int	jg= zd(tjnlv,tjnmp, hjnlv,hjnmp,sjnlv,sjnmp,cjnlv,cjnmp,sx,hxjnlv,hxjnmp,qjnmp,mp,mps,qjnlv,1,"sj",zh,hpg,5201027,lv*4,0,0,0,wgp,hgp,sgp,cgp,fyp,bdssglg,bdysglg,bdysgpg,bdnshpg,bdnsgpg,bdwmglg,bdwmgpg,0);
					if(jg==1)cout<<"你成功了！"<<endl,zhxt=1;
								    else cout<<"你失败了！"<<endl,qqdd();
				}
			}
			}
			}
			else if(cz=="c"){
				cout<<"锻炼次数："<<dlcs<<endl;
				cout<<"无尽次数："<<wjccs<<endl;
				cout<<"信息查看次数："<<xxcs<<endl;
				cout<<"战斗次数："<<zdcs<<endl;
				cout<<"胜利次数："<<slcs<<endl;
				cout<<"失败次数："<<sbcs<<endl;
				cout<<"体术技能使用次数："<<tscs<<endl;
				cout<<"火系技能使用次数："<<hxcs<<endl;
				cout<<"水系技能使用次数："<<sxcs<<endl;
				cout<<"草系技能使用次数："<<cxcs<<endl;
				cout<<"改名次数："<<gmcs<<endl;
				cout<<"规则查看次数："<<gzcs<<endl;
				cout<<"背包打开次数："<<bbcs<<endl;
				cout<<"BOSS挑战次数："<<bosscs<<endl;
				cout<<"游戏打开次数："<<yxcs<<endl;
				cout<<"开启时间："<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
				cout<<"击败人数："<<jbrs<<endl;
				cout<<"敌人等级："<<lvdg<<endl;
				if(zdcs!=0){cout<<"胜率："<<slcs*100/zdcs<<"%"<<endl;
				for(int i=0;i<slcs*27/zdcs;i++)cout<<"▲";
				for(int i=slcs*27/zdcs;i<27;i++)cout<<"△";
				cout<<endl;
				
				}qqdd();
			}
			else if(cz=="d"){
				cout<<"1 体强化碎片*1：1金币"<<endl;
				cout<<"2 火强化碎片*1：1金币"<<endl;
				cout<<"3 水强化碎片*1：1金币"<<endl;
				cout<<"4 草强化碎片*1：1金币"<<endl;
				cout<<"5 生命之源*1：9金币"<<endl;
				cout<<"6 铁粒*4：2金币"<<endl;
				cout<<"7 铜粒*4：4金币"<<endl;
				cout<<"8 钢粒*4：6金币"<<endl;
				cout<<"9 被动突破碎片*1：7金币"<<endl;
				cout<<"a 被动升级石*1：3金币"<<endl;
				cout<<"b 技能升级石*1：6金币"<<endl;
				cout<<"c 技能突破碎片*1：11金币"<<endl;
				cout<<"d 魔回丹*1：9金币"<<endl;
				cout<<"e 魔泉丹*1：9金币"<<endl;
				string d1;
				cin>>d1;
				if(d1=="1"){
					if(jb<1){cout<<"金币不足！"<<endl;}
					else{cout<<"购买成功！"<<endl;
					    jb--;
					    tqhsp++;
					}
				}
				if(d1=="2"){
									if(jb<1){cout<<"金币不足！"<<endl;}
									else{cout<<"购买成功！"<<endl;
									    jb--;
									    hqhsp++;
									}
								}
								if(d1=="3"){
													if(jb<1){cout<<"金币不足！"<<endl;}
													else{cout<<"购买成功！"<<endl;
													    jb--;
													    sqhsp++;
													}
												}
												if(d1=="4"){
																	if(jb<1){cout<<"金币不足！"<<endl;}
																	else{cout<<"购买成功！"<<endl;
																	    jb--;
																	    cqhsp++;
																	}
																}
																if(d1=="5"){
																					if(jb<9){cout<<"金币不足！"<<endl;}
																					else{cout<<"购买成功！"<<endl;
																					    jb-=9;
																					    smzy++;
																					}
																				}
																				if(d1=="6"){
																									if(jb<2){cout<<"金币不足！"<<endl;}
																									else{cout<<"购买成功！"<<endl;
																									    jb-=2;
																									    tieli+=4;
																									}
																								}
																								if(d1=="7"){
																													if(jb<4){cout<<"金币不足！"<<endl;}
																													else{cout<<"购买成功！"<<endl;
																													    jb-=4;
																													    tongli+=4;
																													}
																												}
																												if(d1=="8"){
																																	if(jb<6){cout<<"金币不足！"<<endl;}
																																	else{cout<<"购买成功！"<<endl;
																																	    jb-=6;
																																	    gangli+=4;
																																	}
																																}
																				if(d1=="9"){
																									if(jb<7){cout<<"金币不足！"<<endl;}
																									else{cout<<"购买成功！"<<endl;
																									    jb-=7;
																									    bdjhsp++;
																									}
																								}
																								if(d1=="a"){
																													if(jb<3){cout<<"金币不足！"<<endl;}
																													else{cout<<"购买成功！"<<endl;
																													    jb-=3;
																													    bdsjs++;
																													}
																												}
		        if(d1=="b"){
									if(jb<6){cout<<"金币不足！"<<endl;}
									else{cout<<"购买成功！"<<endl;
									    jb-=6;
									    jnsjs++;
									}
								}if(d1=="c"){
													if(jb<11){cout<<"金币不足！"<<endl;}
													else{cout<<"购买成功！"<<endl;
													    jb-=11;
													    jntpsp++;
													}
												}if(d1=="d"){
																	if(jb<9){cout<<"金币不足！"<<endl;}
																	else{cout<<"购买成功！"<<endl;
																	    jb--;
																	    mhd++;
																	}
																}if(d1=="e"){
																					if(jb<9){cout<<"金币不足！"<<endl;}
																					else{cout<<"购买成功！"<<endl;
																					    jb--;
																					    mqd++;
																					}
																				}
			}
			else if(cz=="e"){
				cout<<"(1 2048  2 速加  3 旋转制胜  4 黑白迭代  5 黑白迭代（高难）  6 十秒速记  9 分数兑换)"<<endl;
				ll e1;
				e1=szi();
				if(e1==1){
					cout<<"最高纪录："<<s2048<<endl;
					qqdd();
					int nd;
					cout<<"请选择难度（1 简单  2 普通  3 困难）"<<endl;
					e1=szi();
					nd+=1;
					int sla;
					nd=4;
					sla++;
					sla=nd;
					if(e1==3)sla=3;
					int a[4][4];
					    long score=0;
					    for(int i=0;i<nd;i++){
					        for(int j=0;j<nd;j++)a[i][j]=0;
					    }
					    bool sl=0;int gj=0;
					    while(sl==0){
					        gj=0;
					             for(int i=0;i<nd;i++){
					            for(int j=0;j<nd;j++){
					                if(a[i][j]==0)gj++;
					            }
					        }
					            if(gj==0){
					                cout<<"fail!"<<endl;
					                cout<<"分数："<<score<<endl;
					                if(score>s2048){
										cout<<"新纪录！"<<endl;
										s2048=score;
									}
					                yxfs+=score/2;
					                cout<<"获得"<<score/2<<"游戏分数"<<endl;
					                
					                qqdd();
					            goto zy;}
					        int x,y,n=0,m=0;
					        while(n!=sla-2&&m!=256){
					            x=rand()%nd;
					            y=rand()%nd;
					            if(a[x][y]==0){
					            	if(e1==1)a[x][y]=1;
									if(e1==2)a[x][y]=rand()%2+1;
									if(e1==3)a[x][y]=rand()%3+1;
					                
					                n++;
					            }
					            m++;
					        }
					        for(int i=0;i<nd;i++){
					            for(int j=0;j<nd;j++){
					                if(a[i][j])printf("%5d",a[i][j]);
					                else printf("    .");
					            }
					            cout<<endl;
					        }
					        string cz;
					        cout<<"分数："<<score<<endl;
					        cout<<"(w 上  s 下  a 左  d 右)"<<endl;
					        cin>>cz;
					        if(cz=="0")goto zy;
					        if(cz=="a"){
					            for(int i=0;i<nd;i++){
					            	for(int p=0;p<27;p++){
					            	for(int j=0;j<nd-1;j++){
										for(int k=0;k<nd-1;k++){
											if(a[i][j]==0)swap(a[i][j],a[i][j+1]);
										}
									}
					                for(int j=0;j<nd-1;j++){
					
					                        if(a[i][j]==a[i][j+1]){
					                            a[i][j]*=2;
					                            a[i][j+1]=0;
					                            score+=a[i][j]*e1;
					                            
					                        }
					                        
					
					                    }
					                }
								}
					        }
					        if(cz=="d"){
					            for(int i=0;i<nd;i++){
					            	for(int p=0;p<27;p++){
					            		for(int j=0;j<nd-1;j++){
											for(int k=0;k<nd-1;k++){
												if(a[i][j+1]==0)swap(a[i][j],a[i][j+1]);
													}
											}
					                for(int j=nd-1;j>0;j--){
					                    if(a[i][j]==a[i][j-1]){
					                        a[i][j]*=2;
					                        a[i][j-1]=0;
					                        score+=a[i][j]*e1;
					                    }
					                    
					                }
					            }
								}
					        }
					        if(cz=="s"){
					            for(int j=0;j<nd;j++){
					            	for(int p=0;p<27;p++){
					            		for(int i=0;i<nd-1;i++){
											for(int k=0;k<nd-1;k++){
												if(a[i+1][j]==0)swap(a[i+1][j],a[i][j]);
											}
										}
					                
					                 for(int i=nd-1;i>0;i--){
									                    if(a[i][j]==a[i-1][j]){
									                        a[i][j]*=2;
									                        a[i-1][j]=0;
									                        score+=a[i][j]*e1;
									                    }
									                    
									                }
					            }
								}
					        }
					        if(cz=="w"){
					            for(int j=0;j<nd;j++){
					            	for(int p=0;p<27;p++){
					            		for(int i=0;i<nd-1;i++){
											for(int k=0;k<nd-1;k++){
												if(a[i][j]==0)swap(a[i+1][j],a[i][j]);
											}
										}
					               for(int i=0;i<nd-1;i++){
								                       if(a[i][j]==a[i+1][j]){
								                           a[i][j]*=2;
								                           a[i+1][j]=0;
								                           score+=a[i][j]*e1;
								                       }
								                      
								                   }
					            }
								}
					        }
					
					
					
					    }
				}
				if(e1==2){
				int u=1;
					while(u==1){
					cout<<"请输入题数"<<endl;
					int a,kkk;
					a=szi();
					int n=0;
					int yy=0;
					while(yy==0){
					cout<<"请输入难度（0~10）";
					int x;
					x=szi();
					cout<<"每题时间："<<(int)(x+1)*1.5<<"s"<<endl;
					qqdd();
					if(x>=11){
						cout<<"ERROR!"<<endl;
						yy=0;
					}
					if(x>=0&&x<=10){
						kkk=x;
						if(x==0)n=5;
						if(x==1)n=10;
					    if(x==2)n=20;
					    if(x==3) n=50;
					    if(x==4)n=100;
					    if(x==5)n=200;
					    if(x==6)n=500;//TODO
						if(x==7)n=1000;//TODO
						if(x==8)n=2000;//TODO
						if(x==9)n=5000;//TODO
						if(x==10)n=10000;//TODO
					yy=1;
					}
					}
					
					int g=0;
					cout<<endl;
					cout<<endl;
					for(int i=1;i<=a;i++){
						int j=rand();
						int aa=j%n;
						int m=rand();
						int bb=m%n;
						cout<<aa<<"+"<<bb<<"=";
						int s;
						ll cssj=sj();
						s=szi();
						if(s==aa+bb&&sj()-cssj<2+(int)(kkk+1)*1.5){
							cout<<"正确！"<<endl;
							g++;
							
						}
						 else if(s!=aa+bb){
							cout<<"错误！"<<endl;
							cout<<"正确答案: "<<aa+bb<<endl;
						}
						else cout<<"超时！"<<endl<<"正确答案: "<<aa+bb<<endl;
					}
					int mark=(g*100)/a;
					cout<<"正确题数："<<g<<endl;
					
					cout<<"分数："<<mark<<endl;
					cout<<"获得"<<(int)(pow(kkk+1,2)*227*g/127)<<"游戏分数"<<endl;
					yxfs+=(int)(pow(kkk,2)*500*g/127);
					cout<<"是否继续？ （1 是  0 否）";
					u=szi();
					
					}
					}
					if(e1==3){
						int a[9][9],sl=0;
							for(int i=0;i<9;i++){
								for(int j=0;j<9;j++){
									a[i][j]=i+1;
								}
							}
							
							cout<<"请选择难度（1 简单  2 普通  3 困难）"<<endl;
							
							e1=szi();
							cout<<"设定时间："<<e1*5<<"分钟"<<endl;
							ll  cssj=sj();
							for(int i=0;i<e1*9;i++){
								int x3=rand()%7+1;
								int y3=rand()%7+1;
								int o=a[x3][y3+1];
								a[x3][y3+1]=a[x3-1][y3];
								a[x3-1][y3]=a[x3][y3-1];
								a[x3][y3-1]=a[x3+1][y3];
								a[x3+1][y3]=o;
							}
							cout<<"用空格链接的两个数字代表行和列。例如扫描第3行第5列："<<endl<<"3 5"<<endl<<"并按下Enter"<<endl<<"则(3,5)相邻四格将会顺时针旋转一次 "<<endl;
														cout<<"使盘面达到目标盘面即为成功"<<endl;
							while(sl==0){
							for(int i=0;i<9;i++){
								for(int j=0;j<9;j++){
									cout<<a[i][j]<<" ";
								}
								cout<<"       ";
								if(i==1)cout<<"目";
								else if(i==3)cout<<"标";
								else if(i==5)cout<<"盘";
								else if(i==7)cout<<"面";
								else{cout<<"  ";}
								cout<<" ";
								for(int j=0;j<9;j++)cout<<i+1<<" ";
								cout<<endl;
							}
							if(300*e1-sj()+cssj<0){
								cout<<"已超时！"<<endl;
								qqdd();
								goto zy;
							}
							cout<<"剩余时间："<<300*e1-sj()+cssj<<"秒"<<endl;
							ll x3=127,y3=127,pd=0;
							while(x3<0||x3>8||y3<2||y3>8||x3==1){x3=szi();if(x3==0)goto zy;y3=szi();
								if(x3<0||x3>8||y3<2||y3>8||x3==1)cout<<"请输入正确的位置!"<<endl;}
								
							x3--;
							y3--;
							int o=a[x3][y3+1];
							a[x3][y3+1]=a[x3-1][y3];
							a[x3-1][y3]=a[x3][y3-1];
							a[x3][y3-1]=a[x3+1][y3];
							a[x3+1][y3]=o;
							for(int i=0;i<9;i++){
								for(int j=0;j<9;j++){
									if(a[i][j]!=i+1)pd++;
								}
							}
							
							if(pd==0){
								cout<<"胜利！"<<endl;
								cout<<"获得"<<(int)(pow(2.5,e1)+0.5)*500<<"游戏分数！"<<endl;
								yxfs+=(int)(pow(2.5,e1)+0.5)*500;
								qqdd();
								goto zy;
							}
							}
					}
					if(e1==4){
						hbdd a[13][13];
						int sl=0;
						for(int i=0;i<13;i++)for(int j=0;j<13;j++)a[i][j].n="□";
						cout<<"设定时间：10分钟"<<endl;
						cout<<"请选择难度（1 简单  2 普通  3 困难  4）"<<endl;
						e1=szi();
						ll  cssj=sj();
						for(int i=0;i<e1*13;i++){
														int x3=rand()%9+1;
														int y3=rand()%9+1;
						if(a[x3][y3].n=="□")	a[x3][y3].n="■";
						else 		a[x3][y3].n="□";					
						if(a[x3][y3+1].n=="□")a[x3][y3+1].n="■";
						else a[x3][y3+1].n="□";
						if(a[x3-1][y3].n=="□")	a[x3-1][y3].n="■";							
						else 		a[x3-1][y3].n="□";						
						if(a[x3][y3-1].n=="□")a[x3][y3-1].n="■";
						else 	a[x3][y3-1].n="□";
						if(a[x3+1][y3].n=="□")			a[x3+1][y3].n="■";
						else 	a[x3+1][y3].n="□";
						}
						cout<<"用空格链接的两个数字代表行和列。例如扫描第3行第5列："<<endl<<"3 5"<<endl<<"并按下Enter"<<endl<<"则(3,5)及相邻四格将会变换一次 "<<endl;
								cout<<"使盘面全黑即为成功"<<endl;
						while(sl==0){
													for(int i=1;i<=9;i++){
														for(int j=1;j<=9;j++){
															cout<<a[i][j].n<<"";
														}
														
														cout<<endl;
													}
													if(600-sj()+cssj<0){
														cout<<"已超时！"<<endl;
														qqdd();
														goto zy;
													}
													cout<<"剩余时间："<<600-sj()+cssj<<"秒"<<endl;
													ll x3=127,y3=127,pd=0;
													while(x3<1||x3>9||y3<1||y3>9){x3=szi();if(x3==0)goto zy;y3=szi();
																					if(x3<1||x3>9||y3<1||y3>9)cout<<"请输入正确的位置!"<<endl;}
														
												
						if(a[x3][y3].n=="□")	a[x3][y3].n="■";
												else 		a[x3][y3].n="□";					
												if(a[x3][y3+1].n=="□")a[x3][y3+1].n="■";
												else a[x3][y3+1].n="□";
												if(a[x3-1][y3].n=="□")	a[x3-1][y3].n="■";							
												else 		a[x3-1][y3].n="□";						
												if(a[x3][y3-1].n=="□")a[x3][y3-1].n="■";
												else 	a[x3][y3-1].n="□";
												if(a[x3+1][y3].n=="□")			a[x3+1][y3].n="■";
												else 	a[x3+1][y3].n="□";
						for(int i=1;i<=9;i++){
														for(int j=1;j<=9;j++){
															if(a[i][j].n!="□")pd++;
														}
													}
													
													if(pd==0){
														cout<<"胜利！"<<endl;
														cout<<"获得"<<e1*1000<<"游戏分数！"<<endl;
														yxfs+=e1*1000;
														qqdd();
														goto zy;
													}													
					}
					}
					if(e1==5){
						hbdd a[13][13],a1[13][13];
												int sl=0;
												for(int i=0;i<13;i++)for(int j=0;j<13;j++)a[i][j].n="□",a1[i][j].n="□";
												cout<<"设定时间：10分钟"<<endl;
												cout<<"请选择难度（1 简单  2 普通  3 困难  4 地狱  >5 最好不要·）"<<endl;
												e1=szi();
												ll  cssj=sj();
												for(int i=0;i<52;i++){
													int x3=rand()%9+1;
													int y3=rand()%9+1;
													a[x3][y3].n="■";
													a1[x3][y3].n="■";
												}
												for(int i=0;i<e1*9;i++){
																				int x3=rand()%9+1;
																				int y3=rand()%9+1;
												if(a[x3][y3].n=="□")	a[x3][y3].n="■";
												else 		a[x3][y3].n="□";					
												if(a[x3][y3+1].n=="□")a[x3][y3+1].n="■";
												else a[x3][y3+1].n="□";
												if(a[x3-1][y3].n=="□")	a[x3-1][y3].n="■";							
												else 		a[x3-1][y3].n="□";						
												if(a[x3][y3-1].n=="□")a[x3][y3-1].n="■";
												else 	a[x3][y3-1].n="□";
												if(a[x3+1][y3].n=="□")			a[x3+1][y3].n="■";
												else 	a[x3+1][y3].n="□";
												}
												cout<<"用空格链接的两个数字代表行和列。例如扫描第3行第5列："<<endl<<"3 5"<<endl<<"并按下Enter"<<endl<<"则(3,5)及相邻四格将会变换一次 "<<endl;
														cout<<"使盘面达到目标盘面即为成功"<<endl;
												while(sl==0){
																			for(int i=1;i<=9;i++){
																				for(int j=1;j<=9;j++){
																					cout<<a[i][j].n<<"";
																					
																				}
																				cout<<"       ";
																							if(i==1)cout<<"目";
																							else if(i==3)cout<<"标";
																							else if(i==5)cout<<"盘";
																							else if(i==7)cout<<"面";
																							else{cout<<"  ";}
																							cout<<" ";
																							for(int j=1;j<=9;j++)cout<<a1[i][j].n<<"";
																				cout<<endl;
																			}
																			if(600-sj()+cssj<0){
																				cout<<"已超时！"<<endl;
																				qqdd();
																				goto zy;
																			}
																			cout<<"剩余时间："<<600-sj()+cssj<<"秒"<<endl;
																			ll x3=127,y3=127,pd=0;
																			while(x3<1||x3>9||y3<1||y3>9){x3=szi();if(x3==0)goto zy;y3=szi();
																					if(x3<1||x3>9||y3<1||y3>9)cout<<"请输入正确的位置!"<<endl;}	
																			
												if(a[x3][y3].n=="□")	a[x3][y3].n="■";
																		else 		a[x3][y3].n="□";					
																		if(a[x3][y3+1].n=="□")a[x3][y3+1].n="■";
																		else a[x3][y3+1].n="□";
																		if(a[x3-1][y3].n=="□")	a[x3-1][y3].n="■";							
																		else 		a[x3-1][y3].n="□";						
																		if(a[x3][y3-1].n=="□")a[x3][y3-1].n="■";
																		else 	a[x3][y3-1].n="□";
																		if(a[x3+1][y3].n=="□")			a[x3+1][y3].n="■";
																		else 	a[x3+1][y3].n="□";
												for(int i=1;i<=9;i++){
																				for(int j=1;j<=9;j++){
																					if(a[i][j].n!=a1[i][j].n)pd++;
																				}
																			}
																			
																			if(pd==0){
																				cout<<"胜利！"<<endl;
																				cout<<"获得"<<e1*2700<<"游戏分数！"<<endl;
																				yxfs+=e1*2700;
																				qqdd();
																				goto zy;
																			}													
											}
					}
					if(e1==6){
						hbdd a[13][13],a1[13][13];
						for(int i=0;i<13;i++)for(int j=0;j<13;j++)a[i][j].n="□",a1[i][j].n="□";
						cout<<"记忆时间：10秒钟"<<endl;
																		while(e1>3){cout<<"请选择难度（1 简单  2 普通  3 困难）"<<endl;
																		e1=szi();}
																		cout<<"即将开始"<<endl;
																		qqdd();
																		ll  cssj=sj();
																		for(int i=0;i<e1*5;i++){
																			int x3=rand()%9;
																			int y3=rand()%9;
																			a[x3][y3].n="■";
																		}
							for(int i=0;i<9;i++){
								for(int j=0;j<9;j++){
								cout<<a[i][j].n<<"";
								}
																					
									cout<<endl;
									}
							cout<<"快记！";
							for(;sj()-cssj<=1;);
							cout<<"10,";
							
							for(;sj()-cssj<=2;);
														cout<<"9,";
							for(;sj()-cssj<=3;);
														cout<<"8,";
							for(;sj()-cssj<=4;);
														cout<<"7,";
							for(;sj()-cssj<=5;);
														cout<<"6,";	
							for(;sj()-cssj<=6;);cout<<"5!";
								for(;sj()-cssj<=7;);cout<<"4!";
								for(;sj()-cssj<=8;);cout<<"3!!";
								for(;sj()-cssj<=9;);cout<<"2!!";
								for(;sj()-cssj<=10;);cout<<"1!!!";
								for(;sj()-cssj<=11;);
								for(int i=0;i<=52*1027;i++)cout<<endl;
								cout<<"共21题"<<endl;
							qqdd();	
							ll zq=0,cw=0;
							for(int t=0;t<21;t++){int x3=rand()%9;
																					int y3=rand()%9;
									for(int i=0;i<9;i++){
																for(int j=0;j<9;j++){
																	if(i==x3&&j==y3)cout<<"# ";
																else cout<<a1[i][j].n<<"";
																}
																													
																	cout<<endl;
																	
																	}cout<<t+1<<"/21"<<endl;cout<<"请问当前“#”所在的位置为："<<endl;
																								cout<<"(1 □  2 ■)"<<endl;
								string da;
								cin>>da;
								if(da=="0")goto zy;
								if((da=="1"&&a[x3][y3].n=="□")||(da=="2"&&a[x3][y3].n=="■"))zq++,cout<<"回答正确！"<<endl;
								else cw++,cout<<"回答错误！"<<endl;
								qqdd();
								
							}
							ll k=0;
							if(cw==0)k=1000*e1;
							if(cw==1)k=300*e1;
							if(cw==2)k=127*e1;
							if(cw==3)k=27*e1;
							if(cw==4)k=9*e1;
							if(cw==5)k=2*e1;
							
							cout<<"获得"<<k<<"游戏分数"<<endl;
							yxfs+=k;
								qqdd();							
					}
					if(e1==9){
						cout<<"1  500游戏分数换1金币 "<<endl;
						cout<<"请输入兑换个数：";
						int gs=szi();
						if(yxfs>=500*gs){
							for(int i=0;i<gs;i++){
								yxfs-=500;
								jb++;
							}
							cout<<"兑换成功！"<<endl;
							qqdd();
							goto zy;
						}
						cout<<"游戏分数不足！"<<endl;
						qqdd();
						
					}
			}
			else if(cz=="*"){
				cout<<"扫雷"<<endl;
				int xx3,xy3;
				kgz=0;
				memset(sl,' ',9800);
				memset(sl2,'#',9800);
				cout<<"  ";
				for(int ix=1;ix<=15;ix++)printf("%2d",ix);
				cout<<endl;
				for(int ix=0;ix<15;ix++){
					printf("%2d",ix+1);
					cout<<" ";
					for(int jx=0;jx<15;jx++)
						cout<<sl2[ix][jx]<<" ";	
					cout<<endl;
				}
				cout<<"保证选择的第一个格子无雷"<<endl;
				cout<<"用空格链接的两个数字代表行和列。例如扫描第3行第5列："<<endl<<"3 5"<<endl<<"并按下Enter"<<endl;
				cout<<"历史记录："<<slsj<<"秒"<<endl;
				xx3=100;
				xy3=100;
				while(xx3<0||xx3>15||xy3<=0||xy3>15){xx3=szi();if(xx3==0)goto zy;xy3=szi();
									if(xx3<0||xx3>15||xy3<=0||xy3>15)cout<<"请输入正确的位置!"<<endl;}
									ll slcsj=sj();
				xx3--;
				xy3--;
				kgz++;
				sl2[xx3][xy3]=sl[xx3][xy3];
				for(int ix=0;ix<27;){
					int xx=rand()%15;
					int xy=rand()%15;
					if(sl[xx][xy]!='*'&&(abs(xx-xx3)>1||abs(xy-xy3)>1)){
						sl[xx][xy]='*';
						ix++;
					}
				}
				for(int ix=0;ix<15;ix++)
					for(int jx=0;jx<15;jx++)
						if(sl[ix][jx]!='*'){
							lei=0;
							for(int ix2=ix-1;ix2<=ix+1;ix2++)
								for(int jx2=jx-1;jx2<=jx+1;jx2++)
									if(sl[ix2][jx2]=='*')lei++;
							sl[ix][jx]=lei+48;
							if(sl[ix][jx]=='0')sl[ix][jx]=' ';
						}
				saolei(xx3,xy3);
				while(kgz!=198){
					cout<<"  ";
					for(int ix=1;ix<=15;ix++)printf("%2d",ix);
					cout<<endl;
						for(int ix=0;ix<15;ix++){
							printf("%2d",ix+1);
							cout<<" ";
							for(int jx=0;jx<15;jx++)
								cout<<sl2[ix][jx]<<" ";	
							cout<<endl;
						}
						xx3=1000;
						cout<<"用时："<<sj()-slcsj<<"秒"<<endl;
					while(xx3<0||xx3>15||xy3<=0||xy3>15){xx3=szi();	if(xx3==0)goto zy;xy3=szi();
														if(xx3<0||xx3>15||xy3<=0||xy3>15)cout<<"请输入正确的位置!"<<endl;}
				
					
					xx3--;
					xy3--;
					if(sl[xx3][xy3]=='*'){
						cout<<"BOOM!"<<endl;
						cout<<"  ";
											for(int ix=1;ix<=15;ix++)printf("%2d",ix);
											cout<<endl;
												for(int ix=0;ix<15;ix++){
													printf("%2d",ix+1);
													cout<<" ";
													for(int jx=0;jx<15;jx++)
														cout<<sl[ix][jx]<<" ";	
													cout<<endl;
												}	
						string qd;
						cout<<"你失败了 (1 确定)"<<endl;
						cin>>qd;	
						goto zy;
					}
					else if(sl2[xx3][xy3]=='#'&&xx3>=0&&xx3<15&&xy3>=0&&xy3<15){
						sl2[xx3][xy3]=sl[xx3][xy3];
						kgz++;
						if(sl[xx3][xy3]==' ')saolei(xx3,xy3);
					}else cout<<"请输入正确的位置!"<<endl;
				}
				cout<<"success!"<<endl;
				int sljli=rand()%5;
				ll slys=sj()-slcsj;
				cout<<"用时："<<slys<<"秒"<<endl;
				if(slsj>slys){
					cout<<"新纪录！"<<endl;
					slsj=slys;
				}
				cout<<"获得抽奖券*"<<sljli<<endl;
				qqdd();
				cjj+=sljli;
			}
			else if(cz=="f"){
				cout<<"一等奖：金币*13"<<endl;
				cout<<"二等奖：金币*9"<<endl;
				cout<<"三等奖：金币*6"<<endl;
				cout<<"四等奖：金币*4"<<endl;
				cout<<"五等奖：金币*2"<<endl;
				cout<<"六等奖：金币*1"<<endl;
				cout<<"请输入抽奖次数"<<endl;
				int csf;
				csf=szi();
				if(cjj<csf){
					cout<<"抽奖券不足！"<<endl;
					goto zy;
				}
				for(;csf--;cjj--){
					int jpf=rand()%100;
					if(jpf>=0&&jpf<=1){cout<<"恭喜"<<zh<<"抽中一等奖：金币*13"<<endl;jb+=13;}
					if(jpf>=2&&jpf<=4){cout<<"恭喜"<<zh<<"抽中二等奖：金币*9"<<endl;jb+=9;}
				    if(jpf>=5&&jpf<=9){cout<<"恭喜"<<zh<<"抽中三等奖：金币*6"<<endl;jb+=6;}
				    if(jpf>=10&&jpf<=19){cout<<"恭喜"<<zh<<"抽中四等奖：金币*4"<<endl;jb+=4;}
					if(jpf>=20&&jpf<=49){cout<<"恭喜"<<zh<<"抽中五等奖：金币*2"<<endl;jb+=2;}
					if(jpf>=50&&jpf<=98){cout<<"恭喜"<<zh<<"抽中六等奖：金币*1"<<endl;jb+=1;}
					if(jpf==99){cout<<"恭喜"<<zh<<"抽中特等奖：金币*27"<<endl;jb+=27;}
					qqdd();
				}
			}
			else if(cz=="g"){
				cout<<"时间转换"<<endl;
				cout<<"1  1000ms换1s   消耗时间转换卡_ms->s*1 & 1000ms时间"<<endl;
				cout<<"2  1s换1000ms   消耗时间转换卡_s->ms*1 & 1s时间"<<endl;
				cout<<"3  60s换1min   消耗时间转换卡_s->min*1 & 60s时间"<<endl;
				cout<<"4  1min换60s   消耗时间转换卡_min->s*1 & 1min时间"<<endl;
				cout<<"5  60min换1h   消耗时间转换卡_min->h*1 & 60min时间"<<endl;
				cout<<"6  1h换60min   消耗时间转换卡_h->min*1 & 1h时间"<<endl;
				cout<<"n  24h换1day   消耗时间转换卡_h->day*1 & 24h时间"<<endl;
				cout<<"7  1s   消耗时间1000ms &时间货币*1000"<<endl;
				cout<<"8  1min   消耗时间60s &时间货币*60000"<<endl;
				cout<<"9  1h   消耗时间60min &时间货币*3600000"<<endl;
				cout<<"a  27ms   消耗时间货币*127"<<endl;
				cout<<"b  时间货币*13   消耗挂机币*4"<<endl;
				string czg;
				cin>>czg;
				if(czg=="1")if(mse>=1000&&zhhm){mse-=1000,se++,zhhm--,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="2")if(se&&zhmh){se--,mse+=1000,zhmh--,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="3")if(se>=60&&zhmf){se-=60,mi++,zhmf--,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="4")if(mi&&zhfm){se+=60,mi--,zhfm--,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="5")if(mi>=60&&zhfx){mi-=60,ho++,zhfx--,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="6")if(ho&&zhxf){ho--,mi+=60,zhxf--,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="7")if(sjsh>=1000&&mse>=1000){sjsh-=1000,se++,mse-=1000,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="8")if(sjsh>=60000&&se>=60){sjsh-=60000,mi++,se-=60,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="9")if(sjsh>=3600000&&mi>=60){sjsh-=3600000,ho++,mi-=60,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="a")if(sjsh>=127){sjsh-=127,mse+=27,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="b")if(gjb>=4){sjsh+=13,gjb-=4,cout<<"转换成功！"<<endl,qqdd();goto zy;}
				if(czg=="n"&&ho>=24&&zhxt){
					cout<<"系统：恭喜你通关了！"<<endl;
					qqdd();
					cout<<"系统：为了表示祝贺，我将删掉此存档。"<<endl;
					qqdd();
					yxjs++;
					zhxt--;
					ho-=24;
					cdmzz[cd-48].n="未注册";
					cdmzz[cd-48].lv=0;
					cdmzz[cd-48].zd=0;
					goto jss;
				}
				cout<<"转换失败！"<<endl;qqdd();
			}
		else{
			cout<<"敬请期待"<<endl;
		}
		ofstream fo,go;
			if(cd=='1')fo.open("data.bat");
		    if(cd=='2')fo.open("wanhd.bat");
		    if(cd=='3')fo.open("521027.bat");
		    if(cd=='4')fo.open("caoshen.bat");
		    if(cd=='5')fo.open("gyc.bat");
		    if(cd=='6')fo.open("cs666.bat");
			if(cd=='7')fo.open("wbrx.bat");
		    if(cd=='8')fo.open("nydykxnhd.bat");
		    if(cd=='9')fo.open("w2199.bat");
			fo<<zh<<" "<<mm<<" "<<mmy<<" "<<lv<<" "<<exp<<" "<<hpg<<" "<<wgp<<" "<<hgp<<" "<<sgp<<" "<<cgp<<" "<<hl<<" "<<fyp<<" "<<wgpdg<<" "<<hgpdg<<" "<<sgpdg<<" "<<cgpdg<<" "<<hpdg<<" "<<lvdg<<" "<<fypdg<<" "<<expg<<" "<<jb<<" "<<cs<<" "<<gq<<" "<<wjpd<<" "<<wjcs<<" "<<xwjcs<<" "<<sx<<endl;
					fo<<tqhsp<<" "<<hqhsp<<" "<<sqhsp<<" "<<cqhsp<<" "<<tqhs<<" "<<hqhs<<" "<<sqhs<<" "<<cqhs<<" "<<xhlp<<" "<<dhlp<<" "<<tieli<<" "<<tongli<<" "<<gangli<<" "<<tieding<<" "<<tongding<<" "<<gangding<<" "<<smzy<<" "<<tiepian<<" "<<tongpian<<" "<<gangpian<<endl;
			        fo<<bdnsgpg<<" "<<bdnshpg<<" "<<bdwmglg<<" "<<bdwmgpg<<" "<<bdssglg<<" "<<bdysglg<<" "<<bdysgpg<<endl;
			        fo<<bdnslv<<" "<<bdwmlv<<" "<<bdsslv<<" "<<bdyslv<<endl;
			        fo<<bdjhsp<<" "<<bdjhs<<" "<<bdsjs<<endl;
			        fo<<dlcs<<" "<<xxcs<<" "<<zdcs<<" "<<slcs<<" "<<sbcs<<" "<<gmcs<<" "<<gzcs<<" "<<bbcs<<" "<<bosscs<<" "<<yxcs<<" "<<wjccs<<" "<<tscs<<" "<<hxcs<<" "<<sxcs<<" "<<cxcs<<" "<<jbrs<<endl;
			        fo<<cjj<<endl;
			        fo<<ho<<" "<<mi<<" "<<se<<" "<<mse<<endl;
			        fo<<zhhm<<" "<<zhmh<<" "<<zhmf<<" "<<zhfm<<" "<<zhxf<<" "<<zhfx<<endl;
			        fo<<b11<<" "<<b12<<" "<<b13<<" "<<b11b<<" "<<b12b<<" "<<b13b<<" "<<b21<<" "<<b22<<" "<<b23<<" "<<b21b<<" "<<b22b<<" "<<b23b<<" "<<b31<<" "<<b32<<" "<<b33<<" "<<b31b<<" "<<b32b<<" "<<b33b<<" "<<b41<<" "<<b42<<" "<<b43<<" "<<b41b<<" "<<b42b<<" "<<b43b<<" "<<b51<<" "<<b52<<" "<<b53<<" "<<b51b<<" "<<b52b<<" "<<b53b<<endl;
			        fo<<b61<<" "<<b62<<" "<<b63<<" "<<b64<<" "<<b65<<" "<<b61b<<" "<<b62b<<" "<<b63b<<" "<<b64b<<" "<<b65b<<" "<<b71<<" "<<b72<<" "<<b73<<" "<<b74<<" "<<b75<<" "<<b76<<" "<<b77<<" "<<b71b<<" "<<b72b<<" "<<b73b<<" "<<b74b<<" "<<b75b<<" "<<b76b<<" "<<b77b<<endl;
			        fo<<jntpsp<<" "<<jnsjs<<" "<<tjnlv<<" "<<hjnlv<<" "<<sjnlv<<" "<<cjnlv<<" "<<tjnmp<<" "<<hjnmp<<" "<<sjnmp<<" "<<cjnmp<<" "<<qjnlv<<" "<<qjnmp<<" "<<mp<<" "<<mps<<" "<<jntps<<" "<<mqd<<" "<<mhd<<" "<<hxjnlv<<" "<<hxjnmp<<" "<<sjsh<<" "<<sjtzq<<" "<<zhxt<<" "<<yxjs<<endl;
			        fo<<wx1<<" "<<wy1<<" "<<wx2<<" "<<wy2<<" "<<wx3<<" "<<wy3<<" "<<wx4<<" "<<wy4<<" "<<wx5<<" "<<wy5<<" "<<wx6<<" "<<wy6<<" "<<wx7<<" "<<wy7<<" "<<wx8<<" "<<wy8<<" "<<wx9<<" "<<wy9<<" "<<wxa<<" "<<wya<<" "<<wxb<<" "<<wyb<<" "<<wxc<<" "<<wyc<<" "<<wxd<<" "<<wyd<<" "<<wxe<<" "<<wye<<" "<<wx0<<" "<<wy0<<" "<<wxm<<" "<<wym<<" "<<wxf<<" "<<wyf<<" "<<wxg<<" "<<wyg<<" "<<wxh<<" "<<wyh<<" "<<wxgt<<" "<<wygt<<" "<<wxi<<" "<<wyi<<" "<<x<<" "<<y<<endl;
				    fo<<s2048<<" "<<year<<" "<<month<<" "<<day<<" "<<qd<<" "<<sxq<<" "<<zxq<<" "<<xti<<" "<<zti<<" "<<slsj<<" "<<endl;
					fo<<yxfs<<" "<<gjb<<" "<<endl;
					fo<<endl;
					go.open("system.bat");
					cdmzz[cd-48].n=zh; 
									cdmzz[cd-48].zd=hpg*10+(wgp+hgp+sgp+cgp)/4*50+fyp*50+bdnslv*lv/2+bdwmlv*lv/2+bdyslv*lv/2+bdsslv*lv/2+(tjnlv+hjnlv+sjnlv+cjnlv+qjnlv+hxjnlv)*50+mp*10+mps*50;
									cdmzz[cd-48].lv=lv; 
									for(int i=1;i<10;i++)go<<cdmzz[i].n<<" "<<cdmzz[i].lv<<" "<<cdmzz[i].zd<<" ";
	}      
	            cdmzz[cd-48].n=zh; 
				cdmzz[cd-48].zd=hpg*10+(wgp+hgp+sgp+cgp)/4*50+fyp*50+bdnslv*lv/2+bdwmlv*lv/2+bdyslv*lv/2+bdsslv*lv/2+(tjnlv+hjnlv+sjnlv+cjnlv+qjnlv+hxjnlv)*50+mp*10+mps*50;
				cdmzz[cd-48].lv=lv;                                                                                 
	getchar();
	jss:
	        if(cd=='1')freopen("data.bat","w",stdout);
		    if(cd=='2')freopen("wanhd.bat","w",stdout);
		    if(cd=='3')freopen("521027.bat","w",stdout);
		    if(cd=='4')freopen("caoshen.bat","w",stdout);
		    if(cd=='5')freopen("gyc.bat","w",stdout);
		    if(cd=='6')freopen("cs666.bat","w",stdout);
		    if(cd=='7')freopen("wbrx.bat","w",stdout);
		    if(cd=='8')freopen("nydykxnhd.bat","w",stdout);
		    if(cd=='9')freopen("w2199.bat","w",stdout);
		cout<<zh<<" "<<mm<<" "<<mmy<<" "<<lv<<" "<<exp<<" "<<hpg<<" "<<wgp<<" "<<hgp<<" "<<sgp<<" "<<cgp<<" "<<hl<<" "<<fyp<<" "<<wgpdg<<" "<<hgpdg<<" "<<sgpdg<<" "<<cgpdg<<" "<<hpdg<<" "<<lvdg<<" "<<fypdg<<" "<<expg<<" "<<jb<<" "<<cs<<" "<<gq<<" "<<wjpd<<" "<<wjcs<<" "<<xwjcs<<" "<<sx<<endl;
		cout<<tqhsp<<" "<<hqhsp<<" "<<sqhsp<<" "<<cqhsp<<" "<<tqhs<<" "<<hqhs<<" "<<sqhs<<" "<<cqhs<<" "<<xhlp<<" "<<dhlp<<" "<<tieli<<" "<<tongli<<" "<<gangli<<" "<<tieding<<" "<<tongding<<" "<<gangding<<" "<<smzy<<" "<<tiepian<<" "<<tongpian<<" "<<gangpian<<endl;
        cout<<bdnsgpg<<" "<<bdnshpg<<" "<<bdwmglg<<" "<<bdwmgpg<<" "<<bdssglg<<" "<<bdysglg<<" "<<bdysgpg<<endl;
        cout<<bdnslv<<" "<<bdwmlv<<" "<<bdsslv<<" "<<bdyslv<<endl;
        cout<<bdjhsp<<" "<<bdjhs<<" "<<bdsjs<<endl;
        cout<<dlcs<<" "<<xxcs<<" "<<zdcs<<" "<<slcs<<" "<<sbcs<<" "<<gmcs<<" "<<gzcs<<" "<<bbcs<<" "<<bosscs<<" "<<yxcs<<" "<<wjccs<<" "<<tscs<<" "<<hxcs<<" "<<sxcs<<" "<<cxcs<<" "<<jbrs<<endl;
        cout<<cjj<<endl;
        cout<<ho<<" "<<mi<<" "<<se<<" "<<mse<<endl;
        cout<<zhhm<<" "<<zhmh<<" "<<zhmf<<" "<<zhfm<<" "<<zhxf<<" "<<zhfx<<endl;
        cout<<b11<<" "<<b12<<" "<<b13<<" "<<b11b<<" "<<b12b<<" "<<b13b<<" "<<b21<<" "<<b22<<" "<<b23<<" "<<b21b<<" "<<b22b<<" "<<b23b<<" "<<b31<<" "<<b32<<" "<<b33<<" "<<b31b<<" "<<b32b<<" "<<b33b<<" "<<b41<<" "<<b42<<" "<<b43<<" "<<b41b<<" "<<b42b<<" "<<b43b<<" "<<b51<<" "<<b52<<" "<<b53<<" "<<b51b<<" "<<b52b<<" "<<b53b<<endl;
        cout<<b61<<" "<<b62<<" "<<b63<<" "<<b64<<" "<<b65<<" "<<b61b<<" "<<b62b<<" "<<b63b<<" "<<b64b<<" "<<b65b<<" "<<b71<<" "<<b72<<" "<<b73<<" "<<b74<<" "<<b75<<" "<<b76<<" "<<b77<<" "<<b71b<<" "<<b72b<<" "<<b73b<<" "<<b74b<<" "<<b75b<<" "<<b76b<<" "<<b77b<<endl;
        cout<<jntpsp<<" "<<jnsjs<<" "<<tjnlv<<" "<<hjnlv<<" "<<sjnlv<<" "<<cjnlv<<" "<<tjnmp<<" "<<hjnmp<<" "<<sjnmp<<" "<<cjnmp<<" "<<qjnlv<<" "<<qjnmp<<" "<<mp<<" "<<mps<<" "<<jntps<<" "<<mqd<<" "<<mhd<<" "<<hxjnlv<<" "<<hxjnmp<<" "<<sjsh<<" "<<sjtzq<<" "<<zhxt<<" "<<yxjs<<endl;
        cout<<wx1<<" "<<wy1<<" "<<wx2<<" "<<wy2<<" "<<wx3<<" "<<wy3<<" "<<wx4<<" "<<wy4<<" "<<wx5<<" "<<wy5<<" "<<wx6<<" "<<wy6<<" "<<wx7<<" "<<wy7<<" "<<wx8<<" "<<wy8<<" "<<wx9<<" "<<wy9<<" "<<wxa<<" "<<wya<<" "<<wxb<<" "<<wyb<<" "<<wxc<<" "<<wyc<<" "<<wxd<<" "<<wyd<<" "<<wxe<<" "<<wye<<" "<<wx0<<" "<<wy0<<" "<<wxm<<" "<<wym<<" "<<wxf<<" "<<wyf<<" "<<wxg<<" "<<wyg<<" "<<wxh<<" "<<wyh<<" "<<wxgt<<" "<<wygt<<" "<<wxi<<" "<<wyi<<" "<<x<<" "<<y<<endl;
		cout<<s2048<<" "<<year<<" "<<month<<" "<<day<<" "<<qd<<" "<<sxq<<" "<<zxq<<" "<<xti<<" "<<zti<<" "<<slsj<<" "<<endl;
		cout<<yxfs<<" "<<gjb<<" "<<endl;
		cout<<endl;
		js:
			
        freopen("system.bat","w",stdout);
        for(int i=1;i<10;i++)cout<<cdmzz[i].n<<" "<<cdmzz[i].lv<<" "<<cdmzz[i].zd<<" ";
	return 0;
	
}
