using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using WPFTestAPP;

namespace WPFTestAPP
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {

        public PagingCollectionView paggingCollectionView;
        
        public MainWindow()
        {
            InitializeComponent();
            this.Loaded += MainWindow_Loaded;
           
        }

        private void MainWindow_Loaded(object sender, RoutedEventArgs e)
        {
            this.Loaded -= MainWindow_Loaded;
            this.btnNext.Click -= BtnNext_Click;
            this.btnNext.Click += BtnNext_Click;
            this.btnPrevious.Click -= BtnPrevious_Click;
            this.btnPrevious.Click += BtnPrevious_Click;


            List<ItemTest> lstSource = new List<ItemTest>();

            for (int i = 0; i < 200; i++)
            {
                lstSource.Add( new  ItemTest($"Test{i}"));
            }

            paggingCollectionView = new PagingCollectionView(lstSource, 10);          
            dtgrid.ItemsSource = paggingCollectionView;
        }

        private void BtnPrevious_Click(object sender, RoutedEventArgs e)
        {
            paggingCollectionView.MoveToPreviousPage();
        }

        private void BtnNext_Click(object sender, RoutedEventArgs e)
        {
            paggingCollectionView.MoveToNextPage();
        }

        class ItemTest
        {
            private string text;

            public string Text
            {
                get { return this.text; }
                set { this.text = value; }
            }

            public ItemTest(string text)
            {
                this.text = text;
            }
        }
    }
}
