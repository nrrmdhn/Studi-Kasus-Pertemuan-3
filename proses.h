using namespace std;

class Proses {
	public :
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("api_data.txt");
//		
			ambil_data.close();
		}

		void toFile(){
			harga=0;
			cout << "Masukan Banyak Pesananmu : ";
    cin >> pilih_menu;
    for (int i= 1; i<= pilih_menu; i++){
        
        cout << "Masukan Menu Apa saja yang kamu inginkan : ";
        cin >> pilih;

      if (pilih == 1){
        cout << " Ayam Geprek\n";
        harga = harga + 21000;
    } else if (pilih == 2){
        cout << " Ayam Goreng\n";
        harga = harga + 17000;
    } else if(pilih == 3){
        cout << " Udang Goreng\n";
        harga = harga + 19000;
    } else if (pilih == 4){
        cout << " Cumi Bakar\n";
        harga = harga + 20000;
    } else if(pilih == 5){
        cout << " Ayam Bakar\n";
        harga = harga + 25000;
    } else{
        cout << " Pilihanmu Tidak Tersedia ";
    }
    }
    

    cout << " Masukan Jarak Rumahmu *Dalam Km\n";
    cin >> jarak;
    cout << "Jarak Rumahmu Sejauh " << jarak << " Km\n";
if (jarak <= 3){
        if(harga <= 25000 ){
            cout << " Ongkir 15000 \n";
            harga = harga + 15000; 
        }
        else if(harga > 25000 ){
            cout << " mendapatkan Potongan Ongkir Sebesar Rp. 3000\n";
            total = harga + 12000;

        } else if(harga  > 50000){
            cout << " mendapatkan Potongan Ongkir Sebesar Rp. 5000 dan Diskon sebesar 15%\n";
            diskon = harga * 0.15;
            total = harga - diskon + 10000;  

        } else if(harga > 150000){
            cout << " mendapatkan Potongan Ongkir Sebesar Rp. 8000 dan Diskon Sebesar 35%\n";
            diskon = harga * 0.35;
            total = harga - diskon + 7000;
        }
    }
else if (jarak > 3){
        if(harga <= 25000){
            cout << "Kamu Dibebani Ongkir 25000 nih\n";
            harga = harga + 25000; 
        }
        else if((harga > 25000) && (harga <= 50000)){
            cout << " mendapatkan Potongan Ongkir Sebesar Rp. 3000\n";
            total = harga + 22000;

        } else if((harga  > 50000) && (harga <= 150000)){
            cout << " mendapatkan Potongan Ongkir Sebesar Rp. 5000 dan Diskon sebesar 15%\n";
            diskon = harga *0.15;
            total = harga - diskon + 20000;  

        } else if (harga > 150000){
            cout << " mendapatkan Potongan Ongkir Sebesar Rp. 8000 dan Diskon Sebesar 35%\n";
            diskon = harga * 0.35;
            total = harga - diskon + 17000;
        }
    }else {
    	cout<<"salah";
	}
    


			tulis_data.open("api_data.txt");
			cout << "Total Harga : " << total << endl;
    cout << "Masukan Jumlah Uang Anda Rp. ";
    cin >> bayar;
    cout << "Kembalian " << bayar - total;
			
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
	int harga, pilih, pilih_menu,jarak, total, bayar, kembalian;
        float diskon;
};
