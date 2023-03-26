/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-quentin.charillon
** File description:
** cd_&_pwd.c
*/

#include"libmy.h"

char **order_shell_without_path(char *buffer, char **argv, char **env)
{
    int i = 0;
    char *print = malloc(sizeof(char) * 100);
    char **path = transform_path_to_tab2d(argv, env);
    i = my_strlen(buffer);
    buffer[i - 1] = '\0';
    for (int c = 0;  path[c] != NULL; c++) {
        print = my_strcat(print, path[c]);
        print = my_strcat(print, "/");
        print = my_strcat(print, buffer);
        execve(print, argv, env);
        my_strcpy(print, "");
        execve(buffer, argv, env);
    }
    if (print_fault_msg_zsh(buffer) == 0)
        return (NULL);
    do_cd_simple(buffer);
    return (path);
}
