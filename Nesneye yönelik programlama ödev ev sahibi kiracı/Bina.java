import java.util.ArrayList;
import java.util.List;

// Bina sınıfı Mulk interface'inden türetiyoruz
class Bina implements Mulk {
    private String name; // Bina adı
    private int numberOfFloors; // Kat sayısı
    private List<Daire> apartments; // Dairelerin listesi

    public Bina(String name, int numberOfFloors) {
        this.name = name; // Bina adı atanıyor
        this.numberOfFloors = numberOfFloors; // Kat sayısı atarız
        this.apartments = new ArrayList<>(); // Dairelerin listesi oluşturuyoruz
    }

    public void addApartment(Daire apartment) {
        apartments.add(apartment); // Daire listesine daire ekleriz
    }

    public void displayInfo() {
        System.out.println("Bina Adı: " + name); // Bina adı yazdırıyoruz
        System.out.println("Kat Sayısı: " + numberOfFloors); // Kat sayısı yazdı

        // Bina içerisindeki dairelerin bilgileri ekrana yazdırırız
        for (Daire apartment : apartments) {
            apartment.displayInfo(); // Dairenin bilgileri yazdırrız
            System.out.println();
        }
    }

    public String getName() {
        return name; // Bina adı geri döndürme
    }
}
