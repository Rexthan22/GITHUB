public class Práctica4 {
    public static void main(String[] args) {
        String nombreProducto = "Kiss Tyrannosaurus Rex 1/35";
        int precioProducto = 1500;
        int cantidadDisponible = 20;
        boolean disponibleVenta = true;

        System.out.println("nombreProducto: " + nombreProducto);
        System.out.println("precioProducto: " + precioProducto);
        System.out.println("cantidadDisponible: " + cantidadDisponible);
        System.out.println("disponibleVenta: " + disponibleVenta);
        if (disponibleVenta == true) {
            System.out.println("Disponible actualmente");
        } else {
            System.out.println("No disponible");
        }
    }

}
