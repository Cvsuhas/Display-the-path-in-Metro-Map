/**
 * @file main.cpp
 * @author suhas c v
 * @brief 
 * @version 0.1
 * @date 2023-11-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "Graph.hpp"

int main() {
    Graph obj;  //Graph object
    int choice;
    bool display = false;

    while(1) {      
        last:
        int src,dst;
        bool green_src = false; bool green_dst = false;
        bool purple_src = false; bool purple_dst = false;

        if(!display)
            system("clear");    
        display = false;
        cout<<"[1] Display the list of Stations"<<endl;     //Displays the station names
        cout<<"[2] Display the path from source to destination"<<endl;  //uses Dijkstar's algorthm to find path between source and destination
        cout<<"[3] Quit"<<endl;
        cin>>choice;

        switch (choice) {

            case 1: 
            {
                system("clear");
                cout<<endl;
                obj.Display_stops();
                cout<<endl;
                display = true;
            }
                break;

            case 2:
            {
                int choice_2;
                bool source = false;
                bool destination = false;
                bool display_1 = false;

                last_1:
                if(!display_1)
                    system("clear");
                display_1 = false;

                if(source)
                    cout<<"Choose the Line of Destination location"<<endl;
                else
                    cout<<"Choose the Line of Source location"<<endl;

                cout<<GREEN<<"[1] Green Line"<<RESET<<endl;
                cout<<PURPLE<<"[2] Purple Line"<<RESET<<endl;
                cout<<"[3] Go Back"<<endl;
                cin>>choice_2;

                switch (choice_2) {

                    case 1:     //case 1 is used to choose source or destination station in green line
                    {
                        if(!source) {
                            cout<<"enter the source location number"<<endl;
                            cin>>src;
                            source = true;
                            green_src = true;
                            goto last_1;
                        }
                        else {
                            cout<<"enter the destination location number"<<endl;
                            cin>>dst;
                            destination = true;
                            green_dst = true;
                        }
                    }
                        break;

                    case 2:     //case 2 is used to choose source and destination station in purple line
                    {
                        if(!source) {
                            cout<<"enter the source location"<<endl;
                            cin>>src;
                            source = true;
                            purple_src = true;
                            goto last_1;
                        }
                        else {
                            cout<<"enter the destination location"<<endl;
                            cin>>dst;
                            destination = true;
                            purple_dst = true;
                        }
                    }
                        break;

                    case 3:
                        goto last;
                        break;

                    default:
                        cout<<RED<<"Enter the choice between 1-3 "<<RESET<<endl;
                        cout<<endl;
                        display_1 = true;
                        goto last_1;
                        break;
                }

                system("clear");
                if (green_src && green_dst && src>=0 && src<=28 && dst>=0 && dst<=28) {
                    obj.Shortest_path(src,dst,"Green");
                    display = true;
                }
                else if (purple_src && purple_dst && src>=0 && src<=36 && dst>=0 && dst<=36) {
                    obj.Shortest_path(src,dst,"Purple");
                    display = true;
                }
                else if(green_src && purple_dst && src>=0 && src<=28 && dst>=0 && dst<=36) {
                    obj.Shortest_path(src,13,"Green");
                    cout<<endl<<RED<<"Change the Line"<<RESET<<endl;
                    obj.Shortest_path(22,dst,"Purple");
                    display = true;
                }
                else if(purple_src && green_dst && src>=0 && src<=36 && dst>=0 && dst<=28) {
                    obj.Shortest_path(src,22,"Purple");
                    cout<<endl<<RED<<"Change the Line"<<RESET<<endl;
                    obj.Shortest_path(13,dst,"Green");
                    display = true;
                }
                else {
                    cout<<RED<<"Invalid source and destination number please choose the correct number"<<RESET<<endl;
                    display = true;
                }
                cout<<endl;
                
            }
                break;

            case 3:
                exit(0);

            default:
                cout<<RED<<"Enter the choice between 1-3 "<<RESET<<endl;
                cout<<endl;
                display = true;
                goto last;
                break;
        }        
    }
}
