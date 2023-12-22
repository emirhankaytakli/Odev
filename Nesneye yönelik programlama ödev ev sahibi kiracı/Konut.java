import java.util.ArrayList;
import java.util.List;
// Konut sınıfı Mulk interface'inden türetiyoruz
class Konut implements Mulk {
    private String address; // Konut adresi
    private EvSahibi evSahibi; // Ev sahibi
    private List<Daire> apartments; // Dairelerin listesi

    public Konut(String address) {
        this.address = address; // Adres atanma
        this.apartments = new ArrayList<>(); // Dairelerin listesi oluşturuyoruz
    }

    public void addApartment(Daire apartment) {
        apartments.add(apartment); // Daire listesine daire ekliyoruz
    }

    public void setEvSahibi(EvSahibi evSahibi) {
        this.evSahibi = evSahibi; // Ev sahibi atama
    }

    public void displayInfo() {
        System.out.println("Adres: " + address); // Adres yazdırma
        evSahibi.displayInfo(); // Ev sahibinin bilgileri yazdırma

        // Konut içerisindeki dairelerin bilgileri ekrana yazdırıyoruz
        for (Daire apartment : apartments) {
            apartment.displayInfo(); // Dairenin bilgileri yazdırıyoruz
            System.out.println();
        }
    }
}
