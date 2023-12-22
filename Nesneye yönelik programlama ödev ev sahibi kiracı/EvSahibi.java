import java.util.ArrayList;
import java.util.List;

// EvSahibi sınıfını Mulk interface'inden türetiyoruz
class EvSahibi implements Mulk {
    private String name; // Ev sahibinin adı
    private String surname; // Ev sahibinin soyadı
    private List<Bina> ownedBuildings;

    public EvSahibi(String name, String surname, Bina bina) {
        this.name = name; // İsim atıyoruz
        this.surname = surname; // Soyisim atıyoruz
        this.ownedBuildings = new ArrayList<>();
    }
    public void addBuilding(Bina building) {
        ownedBuildings.add(building);
    }

    public void displayInfo() {
        System.out.println("Ev Sahibi Adı: " + name); // İsim yazdırma
        System.out.println("Ev Sahibi Soyadı: " + surname); // Soyisim yazdırma
        System.out.println("Sahip Olunan Binalar:");
        for (Bina building : ownedBuildings) {//Sahip olunan binaları yazdırıyoruz
            System.out.println("- " + building.getName());
        }
    }
}

