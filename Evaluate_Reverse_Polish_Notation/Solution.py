

class Solution(object):
    def evalRPN(self, tokens):
        """
        :type tokens: List[str]
        :rtype: int
        """
        op = ["+", "-", "*", "/"]
        res = []
        for i in tokens:
            if i in op:
                op2 = int(res.pop())
                op1 = int(res.pop())
                if i == "+":
                    tmp = op1 + op2
                if i == "-":
                    tmp = op1 - op2
                if i == "*":
                    tmp = op1 * op2
                if i == "/":
                    tmp = op1 / op2
                res.append(str(tmp)) 
            else:
                res.append(i)

        return int(res[0])



if __name__ == '__main__':
    s = Solution()
    t = ["4", "13", "5", "/", "+"]
    print s.evalRPN(t)
    print 6/-132

