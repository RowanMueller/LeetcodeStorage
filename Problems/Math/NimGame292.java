public class NimGame292 {
    public boolean canWinNim(int n) {
        if(n % 4 == 0){
            return false;
        }
        else if(n % 1 == 0){
            return true;
        }
        return false;
    }
}