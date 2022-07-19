using System;
using System.Linq;

public class Solution
{
    public int solution(string skill, string[] skill_trees)
    {

        char[] skill_char = skill.ToCharArray();
        char[] value_tree = new char[] { };
        char[] result_tree = new char[] { };
        int[] indices = new int[] { };

        int answer = 0;
        string result = "";
        string result_skill = "";

        foreach (string tree_value in skill_trees)
        {
            value_tree = tree_value.ToCharArray();
            foreach (char value_skill in skill_char)
            {
                if (tree_value.Contains(value_skill))
                {
                    indices = indices.Append(tree_value.IndexOf(value_skill)).ToArray();
                }
            }

            Array.Sort(indices);

            foreach (int index in indices)
            {
                result_tree = result_tree.Append(value_tree[index]).ToArray();
            }
            result = new string(result_tree);
            result_skill = skill.Substring(0, result_tree.Length);

            if (result_skill.Equals(result))
                answer++;

            indices = new int[] { }; // 초기화
            result_tree = new char[] { }; // 초기화
        }
        return answer;
    }
}