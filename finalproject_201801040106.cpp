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

class Pemrograman : public MataKuliah {
private:
	float ujianTengahSemester;
	float ujianAkhirSemester;

public:
	Pemrograman() {
		ujianTengahSemester = 50;
		ujianAkhirSemester = 60;
	}

	float hitungNilaiAkhir() {
		float nilaiAkhir = (getPresensi() + activity + exercise + tugasAkhir + ujianTengahSemester + ujianAkhirSemester) / 6;
		return nilaiAkhir;
	}

	void cekKelulusan() {
		float nilaiAkhir = hitungNilaiAkhir();
		if (nilaiAkhir >= 75) {
			cout << "Anda lulus mata kuliah Pemrograman dengan nilai akhir " << nilaiAkhir << endl;
		}
		else {
			cout << "Anda tidak lulus mata kuliah Pemrograman. Nilai akhir Anda " << nilaiAkhir << endl;
		}
	}

	void input() {
		float nilai;
		cout << "Masukkan nilai ujian tengah semester: ";
		cin >> nilai;
		ujianAkhirSemester = nilai;
	}
};

int main() {
	Pemrograman pemrograman;
	pemrograman.input();
	pemrograman.cekKelulusan();

	return 0;
}