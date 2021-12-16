#include "constants.h"

void ReadDocumentsAsWordList(const char files_list[][DOC_NAME_MAX_LENGTH], const int FILES_COUNT,
	char files_as_words[][MAX_WORDS_COUNT][MAX_WORD_SIZE], 
	const int MAX_WORDS_COUNT, int words_count_in_each_file[]);


void ReadDocuments(const char files_list[][DOC_NAME_MAX_LENGTH], const int FILES_COUNT,
	char files[][MAX_CHARACTERS_IN_FILE]);