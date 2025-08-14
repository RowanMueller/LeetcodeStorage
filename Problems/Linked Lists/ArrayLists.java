import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class KidsWithCandies {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max = Arrays.stream(candies).max().getAsInt();

        List<Boolean> candiesArr=new ArrayList<>();

        for(int i=0 ; i<candies.length; i++){
            if(candies[i]<(max-extraCandies)){
                candiesArr.add(false);
            }
            else{
                candiesArr.add(true);
            }
        }

        return candiesArr;
    }
}