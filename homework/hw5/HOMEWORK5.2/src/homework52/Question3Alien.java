// COSC 1320 Summer 2015
// Name: Adrian Davila
// Homework 5
// This is my own work; I will not post

package homework52;

/**
 *
 * @author Adrian Davila
 */
public class Question3Alien {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        OgreAlien brutus = new OgreAlien(100,"brutus");
        SnakeAlien slimy = new SnakeAlien(100,"slimy");
        MarshmallowAlien puffy = new MarshmallowAlien(100,"puffy");

        AlienPack pack = new AlienPack(3);	// 3 aliens in the pack
        pack.addAlien(brutus, 0);
        pack.addAlien(slimy, 1);
        pack.addAlien(puffy, 2);

        System.out.println("Total pack damage = " + pack.calculateDamage());


        /*AlienPack pack = new AlienPack(4);

        SnakeAlien snakey = new SnakeAlien(100 , "Snakey");
        MarshmallowAlien softy = new MarshmallowAlien(10 , "Softy");
        MarshmallowAlien lumpy = new MarshmallowAlien(10 , "Lumpy");
        OgreAlien grog = new OgreAlien(75 , "Grog");

        pack.addAlien(snakey , 0);
        pack.addAlien(softy , 1);
        pack.addAlien(lumpy , 2);
        pack.addAlien(grog , 3);

        System.out.println("The aliens in this pack are:");
        for(int i = 0; i < 4; i++){
            String name = pack.getAliens()[i].getName();
            int health = pack.getAliens()[i].getHealth();
            System.out.println(" " + name + " with a health of " + health);
        }
        System.out.println("The total damage from this pack is: " + pack.calculateDamage());*/
    }

}
