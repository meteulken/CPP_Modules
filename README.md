# CPP_Modules
CPP projects

İmplementasyon: Abstract class, implementasyon içerebilirken, interface sadece imzaları içerir ve herhangi bir implementasyon sağlamaz.

Miras Alma: Abstract class, diğer sınıflar tarafından genişletilebilirken, interface sadece başka sınıflar tarafından uygulanabilir.

Kullanım Amacı: Abstract class, benzer nesneler arasındaki ortak davranışları temsil etmek için kullanılırken, interface, nesneler arasında belirli bir davranışı garanti etmek için kullanılır.

### Shallow copy vs Deep Copy

Sonuç olarak, shallow copy ile yapılan kopyalamada nesneler aynı veriye işaret ederken, deep copy ile yapılan kopyalamada her nesne kendi bağımsız veri kopyasına sahip olur. 

Abstract Class Nedir?

    Abstract class'lar, soyut bir kavramı temsil eden ve bu kavramı somutlaştırmak için alt sınıflar tarafından genişletilmesi gereken sınıflardır.

Saf Sanal Fonksiyonlar (Pure Virtual Functions)

    Abstract class'lar, en az bir saf sanal fonksiyon içerirler.
    Saf sanal fonksiyonlar, temel sınıf tarafından uygulanmaz ve sadece alt sınıflar tarafından uygulanır.
    Bu fonksiyonlar, temel sınıfın arayüzünü tanımlar ve alt sınıfların bu arayüzü uygulamalarını sağlar.

Nesne Oluşturulamazlar

    Abstract class'lardan doğrudan bir nesne oluşturulamaz. Bunun yerine, abstract class'tan türetilen alt sınıflardan nesneler oluşturulur.

Arayüz ve Genişletme

    Abstract class'lar genellikle bir arayüz sağlarlar.
    Bu arayüz, alt sınıfların belirli işlevleri uygulamalarını zorunlu kılar.
    Alt sınıflar, abstract class'ın saf sanal fonksiyonlarını uygulayarak soyut kavramı somutlaştırır.
