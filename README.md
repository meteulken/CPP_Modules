# CPP_Modules
CPP projects

# C++ Nesne Yönelimli Programlama (OOP)

Bu döküman, C++ programlama dilinde Nesne Yönelimli Programlama (OOP) konseptlerini anlatmaktadır.

## OOP Nedir?

Nesne Yönelimli Programlama (OOP), programlama paradigmasının bir türüdür. Bu paradigma, yazılımı nesnelerin bir araya gelmesiyle oluşturur ve her nesnenin birbirleriyle etkileşimde bulunmasına olanak tanır. OOP, kodun daha düzenli, anlaşılır ve yeniden kullanılabilir olmasını sağlar.

## OOP'nin Temel İlkeleri

C++ dilinde OOP'yi uygularken aşağıdaki temel ilkeleri göz önünde bulundurmalısınız:

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


### Abstract Class ve Interface Farkları

#### Implementasyon

- **Abstract class**: İmplementasyon içerebilir.
- **Interface**: Sadece imzaları içerir ve herhangi bir implementasyon sağlamaz.

#### Miras Alma

- **Abstract class**: Diğer sınıflar tarafından genişletilebilir.
- **Interface**: Başka sınıflar tarafından uygulanabilir.

#### Kullanım Amacı

- **Abstract class**: Benzer nesneler arasındaki ortak davranışları temsil etmek için kullanılır.
- **Interface**: Nesneler arasında belirli bir davranışı garanti etmek için kullanılır.

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

- Abstract class'lar genellikle bir arayüz sağlarlar.
- Bu arayüz, alt sınıfların belirli işlevleri uygulamalarını zorunlu kılar.
- Alt sınıflar, abstract class'ın saf sanal fonksiyonlarını uygulayarak soyut kavramı somutlaştırır.

