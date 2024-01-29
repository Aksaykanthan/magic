def needleman_wunsch(seq1, seq2, match_score=1, mismatch_score=-1, gap_score=-2):

    score_matrix = [[0 for _ in range(len(seq2) + 1)] for _ in range(len(seq1) + 1)]

    for i in range(1, len(seq1) + 1):
        for j in range(1, len(seq2) + 1):
            match_score = score_matrix[i - 1][j - 1] + match_score if seq1[i - 1] == seq2[j - 1] else score_matrix[i - 1][j - 1] + mismatch_score
            gap_score1 = score_matrix[i - 1][j] + gap_score
            gap_score2 = score_matrix[i][j - 1] + gap_score

            score_matrix[i][j] = max(match_score, gap_score1, gap_score2)

    alignment1 = ""
    alignment2 = ""
    i = len(seq1)
    j = len(seq2)
    while i > 0 and j > 0:
        if score_matrix[i][j] == score_matrix[i - 1][j - 1] + match_score:
            alignment1 += seq1[i - 1]
            alignment2 += seq2[j - 1]
            i -= 1
            j -= 1
        elif score_matrix[i][j] == score_matrix[i - 1][j] + gap_score:
            alignment1 += "-"
            alignment2 += seq2[j - 1]
            j -= 1
        else:
            alignment1 += seq1[i - 1]
            alignment2 += "-"
            i -= 1

    alignment1 = alignment1[::-1]
    alignment2 = alignment2[::-1]
    print(*score_matrix,sep='\n')
    return (alignment1, alignment2), score_matrix[-1][-1]



seq1 = "ATGCT"
seq2 = "AGCT"

alignment, score = needleman_wunsch(seq1, seq2)

print(alignment)
print(score)
