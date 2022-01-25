#include <iostream>
using namespace std;

int main(){
	string Batas = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	int Input;
	
	// tampilan halaman pertama
	cout<<"Pulsa 9718 \ns.d13-11-2021 .TOPUP25RB\nCASHBACK50%\n";
	cout<<"1 Sensasi 50GB,100rb\n2 Freedom Internet\n3 Hot Promo\n4 FreedomCombo\n5 Freedom U\n6 GRATISAN\n7 FreedomHarian\n8 Obrol\n22 Info\n";
	
	// input
	cin>>Input;
	
	cout<<Batas;
	
	switch(Input){
		
		// tampilan jika memilih opsi 1
		case 1:
			cout<<"Sensasi disc 33%\n1 NEW! Sensasi 50GB, 100rb\n(Normal 150rb)\n2 Freedom Internet 200GB, 250rb\n(Normal 350rb)\n3 Freedom Harian\n0 Kembali\n";
			cin>>Input;
			cout<<Batas;
			switch(Input){
				case 1:
				case 2:
				case 3:
				case 0:
					cout<<"Connection problem or invalid MMI\ncode.";
					break;
				default:
					cout<<"Input yang Anda masukkan salah,\nSilahkan masukkan input yang\nsesuai."<<endl;
					break;
			}
			break;
			
		// tampilan jika memilih opsi 2
		case 2:
			cout<<"Freedom Internet 30hr\n1 NEW! 32GB,100rb\n2 NEW! 21GB,75rb\n3 10GB,50rb\n4 4GB,25rb\n5 Paket 5hari dr 6900\n6 Longlife 90hr\n7 Freedom Apps -\nYtube,Netflix,Viu,IG\n8 Lainnya\n";
			cin>>Input;
			cout<<Batas;
			switch(Input){
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					cout<<"Connection problem or invalid MMI\ncode.";
					break;
				default:
					cout<<"Input yang Anda masukkan salah,\nSilahkan masukkan input yang\nsesuai."<<endl;
					break;
			}
			break;
		
		// tampilan jika memilih opsi 3
		case 3:
			cout<<"1. HOT PROMO\n2. 2GB, 5rb/3hr\n3. 4GB, 9rb/5hr\n4. 7GB, 15rb\n5. 9GB, 18rb\n6. 12GB, 25rb\n7. 20GB, 40rb\n8. 25GB, 50rb\n9. BARU! Nelp Puas, Rp100/30hr\n10. IMPoin\n";
			cin>>Input;
			cout<<Batas;
			switch(Input){
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					cout<<"Connection problem or invalid MMI\ncode.";
					break;
				default:
					cout<<"Input yang Anda masukkan salah,\nSilahkan masukkan input yang\nsesuai."<<endl;
					break;
			}
			break;
		
		// tampilan jika memilih opsi 4
		case 4:
			cout<<"FREEDOM COMBO\n1. 50GB+60mnt,150rb\n2. 30GB+60mnt,100rb\n3. 20GB+40mnt,70rb\n4. 14GB+30mnt,50rb\n5. 8GB+20mnt,35rb\n6. 4GB+5mnt,25rb\n7. Freedom Apps\n8. Lain\n9. Info Baru Rollover\n";
			cin>>Input;
			cout<<Batas;
			switch(Input){
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					cout<<"Connection problem or invalid MMI\ncode.";
					break;
				default:
					cout<<"Input yang Anda masukkan salah,\nSilahkan masukkan input yang\nsesuai."<<endl;
					break;
			}
			break;
		
		// tampilan jika memilih opsi 5
		case 5:
			cout<<"Freedom U\n1 U 10GB+25GB APPS,100rb\n2 U 7GB+20GB APPS,80rb\n3 21GB,75rb\n4 U 3GB+15GB APPS,60rb\n5 10GB,50rb\n6 U 2GB+7.5GB APPS,40rb\n7 Lain\n8 Info Baru Rollover\n\n";
			cin>>Input;
			cout<<Batas;
			switch(Input){
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					cout<<"Connection problem or invalid MMI\ncode.";
					break;
				default:
					cout<<"Input yang Anda masukkan salah,\nSilahkan masukkan input yang\nsesuai."<<endl;
					break;
			}
			break;
		
		// tampilan jika memilih opsi 6
		case 6:
			cout<<"Menang 34GB+100diamond di\nIMgaming. 1,000/hr.Ppjgn Otomatis\ns/d 180hr.\n1 Mau?\n2 200MB,2rb\n3 500MB,5rb\n4 1GB,10rb\n5 GRATISAN\n6 Gratis5GB\n7 3GB,25rb\n8 Gratis5Jt\n9 IMKAS\n";
			cin>>Input;
			cout<<Batas;
			switch(Input){
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					cout<<"Connection problem or invalid MMI\ncode.";
					break;
				default:
					cout<<"Input yang Anda masukkan salah,\nSilahkan masukkan input yang\nsesuai."<<endl;
					break;
			}
			break;
		
		// tampilan jika memilih opsi 7
		case 7:
			cout<<"Freedom Kuota Harian 1GB/hr\n1 Total 28GB, Rp74.900/28hr\n2 Total 14GB, Rp39.900/14hr\n3 Total 7GB, Rp19.900/7hr\n4 Freedom Apps\n5 NEW IMPreneur utk bisnis\n20GB+Nelp Rp100rb\n";
			cin>>Input;
			cout<<Batas;
			switch(Input){
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					cout<<"Connection problem or invalid MMI\ncode.";
					break;
				default:
					cout<<"Input yang Anda masukkan salah,\nSilahkan masukkan input yang\nsesuai."<<endl;
					break;
			}
			break;
		
		// tampilan jika memilih opsi 8
		case 8:
			cout<<"Nelpon semua Oprt lbh jernih dg\nOBROL didukung jaringan VOLTE\n1. 50rb/30hr\n2. 25rb/30hr\n3. 15000/14hr\n4. BARU!10rb/30hr ke IM3\n5. 3000/hr\n6. Telp 6 Negara 10rb/30hr\n7. Lain\n";
			cin>>Input;
			cout<<Batas;
			switch(Input){
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					cout<<"Connection problem or invalid MMI\ncode.";
					break;
				default:
					cout<<"Input yang Anda masukkan salah,\nSilahkan masukkan input yang\nsesuai."<<endl;
					break;
			}
			break;
		
		// tampilan jika memilih opsi 22
		case 22:
			cout<<"Cek paketmu disini!\n1 Cek Kuota\n2 Cek Status\n3 Cek Lokasi\n4 Berhenti\n5 Syarat & Ketentuan\n6 myIM3 GRATIS 1GB\n7 Customer Service\n0 Kembali\n";
			cin>>Input;
			cout<<Batas;
			switch(Input){
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 0:
					cout<<"Connection problem or invalid MMI\ncode.";
					break;
				default:
					cout<<"Input yang Anda masukkan salah,\nSilahkan masukkan input yang\nsesuai."<<endl;
					break;
			}
			break;
		
		// tampilan jika memilih opsi selain di atas
		default:
			cout<<"Input yang Anda masukkan salah,\nSilahkan masukkan input yang\nsesuai."<<endl;
			break;
	}
	
	system ("pause");
	return 0;
}

