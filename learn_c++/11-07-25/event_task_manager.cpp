#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a Task struct to hold task information
struct Task
{
    string description;
    bool completed;
};

// Function to add a new task
void addTask(vector<Task> &tasks)
{
    string desc;
    cout << "Enter task description: ";
    getline(cin, desc);
    tasks.push_back({desc, false});
    cout << "Task added.\n";
}

// Function to view all tasks
void viewTasks(const vector<Task> &tasks)
{
    if (tasks.empty())
    {
        cout << "No tasks found.\n";
        return;
    }
    cout << "Tasks List:\n";
    for (size_t i = 0; i < tasks.size(); ++i)
    {
        cout << i + 1 << ". " << tasks[i].description
             << (tasks[i].completed ? " [Completed]" : " [Pending]") << "\n";
    }
}

// Function to mark a task as completed
void completeTask(vector<Task> &tasks)
{
    int taskNum;
    cout << "Enter task number to mark as completed: ";
    cin >> taskNum;
    cin.ignore(); // clear newline
    if (taskNum < 1 || taskNum > (int)tasks.size())
    {
        cout << "Invalid task number.\n";
        return;
    }
    tasks[taskNum - 1].completed = true;
    cout << "Task marked as completed.\n";
}

int main()
{
    vector<Task> tasks;
    int choice;

    do
    {
        cout << "\nScience Fair Event Planner\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task Completed\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore(); // To handle the newline character after choice input

        switch (choice)
        {
        case 1:
            addTask(tasks);
            break;
        case 2:
            viewTasks(tasks);
            break;
        case 3:
            completeTask(tasks);
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice, try again.\n";
        }
    } while (choice != 4);

    return 0;
}
