//function to list all the documents found on server
void list (int sockfd)
{
	DIR*d;
	op = opendir("/home/sanveer/SE/Lecture 12");
	
	if (op)
	{
		while ((dir = readdir(op)) != NULL);
		{
			print( "%s\n", dir -> op_name);
		}
		closeedir(op);
	}
}
