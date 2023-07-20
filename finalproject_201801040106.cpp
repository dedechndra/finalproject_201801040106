#include <iostream>
using namespace std;
int main()


class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 10;
		activity = 20;
		exercise = 30;
		tugasAkhir = 40;
	}


	virtual float hitungNilaiAkhir(75) { return 0; }
	virtual void cekKelulusan() { return; }
	virtual void input() { return; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}

	class Presensi : public nilai {
	public:
		void input(90) {
			cout << "nilapresensi dibuat" << endl;
			cout << "Masukkan nilaipresensi: ";
		}

		float nilai(90) {
			return 90 * getX();
		}
	}
};
