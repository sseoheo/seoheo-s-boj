class Solution {
    fun solution(start: Int, end_num: Int): IntArray {
        var answer: IntArray = (end_num .. start).toList().reversed().toIntArray()
        return answer
    }
}