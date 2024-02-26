# Nesne Yönelimli Programlama (OOP) ve C++


## OOP Nedir?

Nesne Yönelimli Programlama (OOP), programlama paradigmasının bir türüdür. Bu paradigma, yazılımı nesnelerin bir araya gelmesiyle oluşturur ve her nesnenin birbirleriyle etkileşimde bulunmasına olanak tanır. OOP, kodun daha düzenli, anlaşılır ve yeniden kullanılabilir olmasını sağlar.

### OOP'nin Temel İlkeleri

1. **Sınıflar ve Nesneler**: Sınıflar, veri yapılarını ve bu veri yapıları üzerinde işlemleri içeren bir şablondur. Nesneler ise bu sınıfların örnekleridir.

    ```cpp
    class Araba {
    private:
        string marka;
        int modelYili;
    public:
        void setMarka(string m) {
            marka = m;
        }
        void setModelYili(int yil) {
            modelYili = yil;
        }
    };

    Araba araba1; // Araba sınıfından bir nesne oluşturuldu
    ```

2. **Encapsulation (Kapsülleme)**: Verilerin ve bu verilere erişen fonksiyonların bir arada bulunmasıdır. Veri gizleme ve sınıf arasındaki etkileşimi kontrol etmek için kullanılır.

    ```cpp
    class Araba {
    private:
        string marka;
        int modelYili;
    public:
        void setMarka(string m) {
            marka = m;
        }
        void setModelYili(int yil) {
            modelYili = yil;
        }
        string getMarka() {
            return marka;
        }
        int getModelYili() {
            return modelYili;
        }
    };
    ```

3. **Kalıtım (Inheritance)**: Bir sınıfın başka bir sınıftan özelliklerini ve davranışlarını miras alabilmesidir.

    ```cpp
    class Otomobil : public Araba {
    private:
        int motorHacmi;
    public:
        void setMotorHacmi(int hacim) {
            motorHacmi = hacim;
        }
        int getMotorHacmi() {
            return motorHacmi;
        }
    };
    ```

4. **Polimorfizm (Polymorphism)**: Aynı isimde farklı işlevselliklere sahip olan fonksiyonların aynı sınıf içinde veya farklı sınıflarda tanımlanabilmesidir.

    ```cpp
    class Sekil {
    public:
        virtual void alanHesapla() = 0; // Saf sanal fonksiyon
    };

    class Dikdortgen : public Sekil {
    private:
        int uzunluk, genislik;
    public:
        Dikdortgen(int u, int g) : uzunluk(u), genislik(g) {}
        void alanHesapla() override {
            cout << "Dikdörtgen Alanı: " << uzunluk * genislik << endl;
        }
    };
    ```

5. **Arayüz (Interface)**: Nesneler arasında belirli bir davranışı garanti etmek için kullanılır.

    ```cpp
    class GeometrikSekil {
    public:
        virtual double alanHesapla() = 0;
        virtual double cevreHesapla() = 0;
    };

    class Dikdortgen : public GeometrikSekil {
    private:
        double uzunluk, genislik;
    public:
        Dikdortgen(double u, double g) : uzunluk(u), genislik(g) {}
        double alanHesapla() override {
            return uzunluk * genislik;
        }
        double cevreHesapla() override {
            return 2 * (uzunluk + genislik);
        }
    };
    ```

### Shallow Copy vs Deep Copy

Sonuç olarak, shallow copy ile yapılan kopyalamada nesneler aynı veriye işaret ederken, deep copy ile yapılan kopyalamada her nesne kendi bağımsız veri kopyasına sahip olur.

### Abstract Class Nedir?

Abstract class'lar, soyut bir kavramı temsil eden ve bu kavramı somutlaştırmak için alt sınıflar tarafından genişletilmesi gereken sınıflardır.

#### Saf Sanal Fonksiyonlar (Pure Virtual Functions)

- Abstract class'lar, en az bir saf sanal fonksiyon içerirler.
- Saf sanal fonksiyonlar, temel sınıf tarafından uygulanmaz ve sadece alt sınıflar tarafından uygulanır.
- Bu fonksiyonlar, temel sınıfın arayüzünü tanımlar ve alt sınıfların bu arayüzü uygulamalarını sağlar.

#### Nesne Oluşturulamazlar

Abstract class'lardan doğrudan bir nesne oluşturulamaz. Bunun yerine, abstract class'tan türetilen alt sınıflardan nesneler oluşturulur.

#### Arayüz ve Genişletme

- Abstract class'lar genellikle bir arayüz sağlarlar.
- Bu arayüz, alt sınıfların belirli işlevleri uygulamalarını zorunlu kılar.
- Alt sınıflar, abstract class'ın saf sanal fonksiyonlarını uygulayarak soyut kavramı somutlaştırır.
