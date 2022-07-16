#include <stdio.h>

int main(){
	int answer;

	int N,M,i,j,k,toplam,temp,temp2,max,min,counter;
	int tablo[100][100];
	int list[100],list2[100],indis[100];
	
	printf("Otobus hat sayisini giriniz  : ");
	scanf("%d",&N);
	printf("Otobus durak sayisini giriniz: ");
	scanf("%d",&M);
	printf("Hangi hatlarin hangi duraklarda durdugunu gosteren tabloyu giriniz: \n\n");
	for(i=0;i<N;i++){
		printf("%d. Hat:   ",i+1);
		for(j=0;j<M;j++)                        /*Okuma yapildi*/
			scanf("%d",&tablo[i][j]);
	}printf("\n");	
		
	for(i=0;i<N;i++){
		toplam=0;		
		for(j=0;j<M;j++){
			toplam=toplam+tablo[i][j];    /*Her hattin toplam durak sayisi hesaplandi ve hatlarin indisleri bir diziye atandi*/
		}					                
		list[i]=toplam;
		indis[i]=i;						
	}
	
	for(i=0;i<N;i++){
		max=i;
		for(k=i+1;k<N;k++){
			if(list[max]<list[k])        
				max=k;					   /*Her hattin durak saiyisi siralandi*/				
		}
		temp=list[i];
		list[i]=list[max];
		list[max]=temp;
		temp=indis[i];
		indis[i]=indis[max];
		indis[max]=temp;
	}
	for(j=0;j<N;j++)
		printf("%d. Hat durak sayisi: %d\n",indis[j]+1,list[j]);    /*Durak sayilari indislerle beraber ekrana yazdirildi*/
	printf("\n");
		
	for(k=0;k<M;k++){
		toplam=0;
		for(j=0;j<N;j++){                     /*Her durak otobus gecis sayisi hesaplandi*/
			toplam=toplam+tablo[j][k];
		}
		list2[k]=toplam;
	}
	
	if(list2[0]<list2[1]){
		min=0;
		max=1;
	}
	else if(list2[0]>list2[1]){     /*(Varsa) Hazýr bir fonksiyon kullanilmadi burasi icin, ilk iki elemana gore min max atamasi yapildi*/
		min=1;
		max=0;
	}
	else{
		min=0;
		max=1;
	}
	
	for(k=2;k<M;k++){	
		if(list2[k]>list2[max]) 
			max=k;			              /*min ve max degerleri bulundu*/
		else if(list2[k]<list2[min])
			min=k;					
	}

	printf("En yogun durak(lar): ");
	for(j=0;j<M;j++){
		if(list2[j]==list2[max])          
			printf("%d.durak ",j+1);     
	}		                               /*Diger duraklar uzerinde esitlik kontrolu yapilarak en yogun/en az yogun duraklar bulundu*/
	printf("\nEn az yogun durak(lar): ");
	for(j=0;j<M;j++){
		if(list2[j]==list2[min])
			printf("%d.durak ",j+1);
	}
	
	max=0;
	counter=0;
	for(i=0;i<N;i++){           /*Hem satirlar arasinda ic-ice gideceginden hem de sutunlara bakilacagindan 3 ic-ice for kullanildi*/
		for(k=i+1;k<N;k++){
			for(j=0;j<M;j++){
				if(tablo[i][j]==1 && tablo[k][j]==1)
					counter++;				
			}
			if(counter>max){
				max=counter;
				temp2=k;
				temp=i;
			}																
			counter=0;
		}
	}
	printf("\n\nEn benzer hatlar: %d.hat ve %d.hat",temp+1,temp2+1);
	printf("\n\nProgram bitti, cikmak icin bir tusa basiniz");          
		
		getch();
		return 0;
}
	

