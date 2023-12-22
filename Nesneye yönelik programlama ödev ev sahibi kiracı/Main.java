public class Main {
    public static void main(String[] args) {
        // Bina oluşturma
        Bina bina1 = new Bina("Mercan apartmanı", 100);
        Bina bina2 = new Bina("Rodos apartmanı", 102);
        // Daireler oluşturma
        Daire daire1 = new Daire("101", 1, 200);
        Daire daire2 = new Daire("102", 2, 250);

        // Bina'ya dairelerin eklenmesi
        bina1.addApartment(daire1);
        bina1.addApartment(daire2);

        // Ev Sahibi oluşturma
        EvSahibi evSahibi = new EvSahibi("Emirhan", "Kaytaklı", bina1);

        // Konut oluşturma
        Konut konut = new Konut("Yavuz Mh.");
        konut.setEvSahibi(evSahibi);

        // Kiracı oluşturma
        Kiraci kiraci = new Kiraci("mehmet", "kaya", 30);

        // Kiracının bilgilerini görüntüleme
        kiraci.displayInfo();

        // Konut'a dairelerin eklenmesi
        konut.addApartment(daire1);
        konut.addApartment(daire2);

        // Bina bilgilerini görüntüleme
        System.out.println("Bina Detayları:");
        bina1.displayInfo();

        // Konut bilgilerini görüntüleme
        System.out.println("\nKonut Detayları:");
        konut.displayInfo();
    }
}


