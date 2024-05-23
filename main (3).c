
#include <stdio.h>
# define boyut 10

int dizi[boyut];

void search(int arananEleman){
    int konum=HashHesapla(arananEleman);  // hashin mantığı neydi sayılar belli konuma göre bulunuyodu hashını hesaparsam aranan elemanını konumunuda bulurum.
    if(dizi[konum]==arananEleman){
        // çakışma durumu olmadan hemen diziye yerleştiği durumdur bu durum ve ilk seferde bulunur.
        printf("aranan eleman ilk seferde %d.indis
                printf("\n aranan eleman %d.seferde %d.indiste bulundu.",counter,temp);
                return;
            }te bulundu.",konum);
    }
    else{
        int counter=1; // çakışma sayısını tutar.
        int temp=konum;
        while(dizi[temp]!=0){
            // boş olmayan konumlarda arama yap anlamına geliyo
            counter++;
            temp=(temp+1)%10;
            if(temp==konum){
                printf("\n aradığınız eleman bulunamadı");
                return;
            }
            if(dizi[temp]==arananEleman){
        }
        printf("\n aradığınız eleman bulunamadı....");
    }
}

int HashHesapla(int eklenecek){
    int mod=eklenecek%10;
    return mod;
}

void insert(int eleman){
    int konum=HashHesapla(eleman);
    if(dizi[konum]==0){
    // dizi oluşturulduğunda hepsine varsayılan değer 0 olarak atanıyor yani o değer boşsa anlamına geliyor
    dizi[konum]=eleman;
    }
    else{
        int temp=konum;
        while(dizi[temp]!=0){
            // bu o konumun dolu olduğunu ifade eder o yüzden konumu bir değiştiriyorz.
            temp=(temp+1)%10;
            if(temp==konum){
                // bu şu anlama geliyor tüm dizi dolaşılmış başladığı noktaya gelmiş yani dizi dolu anlamına geliyor.
                printf("\n dizide hiç boş yer yok.");
                return;
            }
        }
        dizi[temp]=eleman; // bunu while döngüsü dışına ayzdık çünkü while döngüsünün amacı boş boş bir konum bulmak while döngüsü bittiğinde elde boş bir konum oluyor ve yerleştiriyoruz.
    }
}

void yazdir(){
    printf("*****DİZİNİN ELEMANLARI*****");
    for(int i=0;i<10;i++){
        printf("\n %d.indis->%d ",i,dizi[i]);
    }
}

int main()
{
    insert(51);
    insert(52);
    insert(77);
    insert(71);
    insert(33);
    insert(43);
    insert(64);
    insert(89);
    insert(99);
    insert(100);
    search(100);
    yazdir();
}
