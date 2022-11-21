// Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful

 

template<class IT>
void my_selection_sort( IT begin, IT end)
{
    IT mini;
    IT next;
    for (IT i = begin; i != end; ++i)
    {
        mini = i;
        next = i;
        for (IT j = ++next; j != end; ++j)
        {
            if (*j < *mini)
            {
                mini = j;
            }
        }
        std::swap(*mini, *i);
    }
}
