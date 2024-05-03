using Combinatorics

function find_permutation(digits, desired_permutation)
    permutations_vector = sort(collect(permutations(digits)))
    result = permutations_vector[desired_permutation]
    return result
end

digits = collect(0:9)
target_permutation = 1000000
result = find_permutation(digits, target_permutation)
println("The milionth lexicographic permutation of the digits is ", join(result))