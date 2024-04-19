int x(bool a)
{
    // ruleid: returning-else
    if (a)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int x(bool a)
{
    if (a)
    {
        return 1;
    }
    else if (!a)
    {
        // ok: returning-else
        return 2;
    }

    return 3;
}

int x(bool a)
{
    if (a)
    {
        return 2;
    }
    // ok: returning-else
    return 1;
}

int x(bool a)
{
    // ruleid: returning-else
    if (a)
    {
        a = false;
    }
    else
    {
        return 3;
    }
}

int x(bool a)
{
    if (!a)
    {
        return 4;
    }

    // ok: returning-else
    a = false;
}

int x(bool a, bool b)
{
    if (!a)
    {
        // ruleid: returning-else
        if (!b)
        {
            a = true;
        }
        else
        {
            return 5;
        }
    }

    a = false;

    // ok: returning-else
    return 6;
}

int x(bool a, bool b)
{
    // ruleid: returning-else
    if (!a)
    {
        // ruleid: returning-else
        if (!b)
        {
            a = true;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        // ok: returning-else
        return 2;
    }

    // ok: returning-else
    return 3;
}