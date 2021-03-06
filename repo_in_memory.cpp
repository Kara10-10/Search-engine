#include "repo_in_memory.hpp"
#include <string>
 void RepoInMemory::SaveLink(std::string link)
{
    this->_links.insert(link);
}

 void RepoInMemory::SaveSite(std::string url, std::string content)
{
    this -> _sites[url] = content;
}

 std::string RepoInMemory::GetSite(std::string url)
{
    return this-> _sites[url];
}