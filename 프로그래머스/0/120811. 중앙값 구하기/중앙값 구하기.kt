class Solution {
    fun solution(array: IntArray): Int {
        var answer = array.toList().sorted()
        return answer[answer.size/2]
    }
}