// Daire sınıfı Mulk interface'inden türetelim
class Daire implements Mulk {
    private String apartmentNumber; // Daire numarası
    private int roomCount; // Oda sayısı
    private int price; // Fiyat

    public Daire(String apartmentNumber, int roomCount, int price) {
        this.apartmentNumber = apartmentNumber; // Daire numarası atama
        this.roomCount = roomCount; // Oda sayısı atama
        this.price = price; // Fiyat atama
    }

    public void displayInfo() {
        System.out.println("Apartman Numarası: " + apartmentNumber); // Daire numarası yazdıralım
        System.out.println("Oda Sayısı: " + roomCount); // Oda sayısı yazdıralım
        System.out.println("Fiyat: " + price); // Fiyat yazdırma
    }
}

